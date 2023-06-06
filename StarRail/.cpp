#include "logindialog.h"
#include "ui_logindialog.h"

#include "Mainwindow.h"
#include "ui_Mainwindow.h"

#include <User.h>

#include <QFileDialog>
#include <QIODevice>
#include <QMessageBox>
#include <QFile>



LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

}


LoginDialog::~LoginDialog()
{
    delete ui;
}


void LoginDialog::on_pushButton_2_pressed()
{
    //登录
    //Lambda 表达式
    connect(ui->pushButton_2,&QPushButton::clicked,[this](){
        if(ui->lineEdit_2->text().isEmpty() || ui->lineEdit_3->text().isEmpty())
        {
            QMessageBox::critical(this,"警告","用户名或密码不能为空");
            return;
        }
        else
        {
            UserInfo user = {ui->lineEdit_2->text(),ui->lineEdit_3->text()};
            User* call = new User();

            int ret = call->judgeUsernameAndpassword(user);//调用judgeUsernameAndpassword()方法来验证用户名和密码,并将返回值存储在ret变量中

            switch (ret)
            {
            case 0:
                QMessageBox::information(this,"信息","登录成功！");
                hide();
                break;
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

void LoginDialog::on_pushButton_3_pressed()
{
    //注册
    connect(ui->pushButton_3,&QPushButton::clicked,[this](){
        if(ui->lineEdit_2->text().isEmpty() || ui->lineEdit_3->text().isEmpty()){
            QMessageBox::critical(this,"警告","用户名或密码不能为空");
            return;
        }else {
            UserInfo user = {ui->lineEdit_2->text(),ui->lineEdit_3->text()};
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

}
void LoginDialog::closeEvent(QCloseEvent *event)
{
    MainWindow* w = new MainWindow;
    w->show();
}
