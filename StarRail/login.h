#ifndef LOGIN_H
#define LOGIN_H


#include "star.h"

#include "loginvedio1.h"
#include "ui_loginvedio1.h"


namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
    void show();


private:
    Ui::login *ui;



};

#endif // LOGIN_H


