#include "login.h"
#include "ui_login.h"

#include "User.h"
#include "star.h"



login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{

    ui->setupUi(this);

    //动图播放
    QMovie *movie = new QMovie(":/Image/login2.gif");
    ui->login_gif->setMovie(movie);
    movie->start();

    //注册
    connect(ui->pushButton_register,&QPushButton::clicked,[this](){
        if(ui->lineEdit_user->text().isEmpty() || ui->lineEdit_pswd->text().isEmpty()){
            QMessageBox::critical(this,"警告","用户名或密码不能为空");
            return;
        }else {
            UserInfo user = {ui->lineEdit_user->text(),ui->lineEdit_pswd->text()};
            User* call = new User();
            int ret = call->registerUser(user);
            switch (ret) {
            case 0:
                QMessageBox::information(this,"信息","注册成功！");
                break;
            case 1:
                QMessageBox::question(this,"信息","注册失败");
                break;
            }

        }
    });

    //登录
    //Lambda 表达式
    connect(ui->pushButton_login,&QPushButton::clicked,[this](){
        if(ui->lineEdit_user->text().isEmpty() || ui->lineEdit_pswd->text().isEmpty())
        {
            QMessageBox::critical(this,"警告","用户名或密码不能为空");
            return;
        }
        else
        {
            UserInfo user = {ui->lineEdit_user->text(),ui->lineEdit_pswd->text()};
            User* call = new User();

            int ret = call->judgeUsernameAndpassword(user);//调用judgeUsernameAndpassword()方法来验证用户名和密码,并将返回值存储在ret变量中

            switch (ret)
            {
            case 0:
               { QMessageBox::information(this,"信息","登录成功！");
                this->close();
                LoginVedio1* loginlogin1 = new LoginVedio1;
                loginlogin1->show();
                break;}
            case 1:
                QMessageBox::question(this,"信息","登录失败");
                break;
            case 2:
                QMessageBox::critical(this,"信息","账号或密码错误");
                break;
            case 3:
                QMessageBox::critical(this,"信息","不能以username或password来作为账号密码");
                break;
            }
        }
    });


}


login::~login()
{
    delete ui;
}


void login::show()
{
    QWidget::show();  // 显示窗口

    QApplication::exec();  // 启动事件循环
}

