#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include <QSettings>//注册表类
#include <QCryptographicHash>
#include <QMessageBox>

DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin)
{
    ui->setupUi(this);

   readSettings();
}

DialogLogin::~DialogLogin()
{
    delete ui;
}


//写注册表
void DialogLogin::writeSettings()
{
    QSettings settings("AXB-QT","Samp_6_5");//建立注册表
    settings.setValue("Username",m_user);//将设置 键 为"Username"、值 为m_user的设置项保存到注册表中
    settings.setValue("Password",m_pswd);
    settings.setValue("saved",ui->checkBoxSave->isChecked());
}
void DialogLogin::readSettings()
{
    QSettings settings("AXB-QT","Samp_6_5");
    bool saved = settings.value("saved",false).toBool();
    m_user = settings.value("Username","user").toString();//从注册表中读取 指定键 的值并将其赋给m_user
    QString defualtPSWD = encrypt("12345");
    m_pswd = settings.value("Password",defualtPSWD).toString();

    if (saved)
        ui->lineeditUser->setText(m_user);//如果saved值为true将文本框内容设置为m_user的值
    ui->checkBoxSave->setChecked(saved);//设置ui->checkBoxSave的选中状态为saved的值
}



//加密密码
QString  DialogLogin::encrypt(const QString &str)
{
    QByteArray btArray;
    btArray.append(str);
    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(btArray);
    QByteArray resultArray = hash.result();
    QString md5 = resultArray.toHex();
    return md5;
}


void DialogLogin::on_btnOK_clicked()
{
    QString user = ui->lineeditUser->text().trimmed();
    QString pswd = ui->lineeditPSWD->text().trimmed();

    if(user == m_user && encrypt(pswd) == m_pswd)
    {
        accept();
    }
    else
    {
        m_tryCount++;
        if(m_tryCount>3)
        {
            QMessageBox::critical(this,"ERROR","错误次数过多，强行退出");
            reject();
        }
        else
        {
            QMessageBox::warning(this,"ERROR","用户名或密码错误");
        }
    }
}
