#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private slots:
    void on_pushButton_2_pressed();

    void on_pushButton_3_pressed();

private:
    Ui::LoginDialog *ui;
    void closeEvent(QCloseEvent *event);
};

#endif // LOGINDIALOG_H
