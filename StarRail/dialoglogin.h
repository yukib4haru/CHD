#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>

namespace Ui {
class DialogLogin;
}

class DialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLogin(QWidget *parent = nullptr);
    ~DialogLogin();

private slots:
    void on_button1_clicked();

    void on_btnOK_clicked();

private:
    Ui::DialogLogin *ui;
    QString m_user;
    QString m_pswd;
    int m_tryCount = 0;
    void writeSettings();
    void readSettings();
    QString encrypt(const QString& str);
};

#endif // DIALOGLOGIN_H
