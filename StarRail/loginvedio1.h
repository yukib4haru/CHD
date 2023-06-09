#ifndef LOGINVEDIO1_H
#define LOGINVEDIO1_H

#include"star.h"
#include "loginvedio2.h"
#include "ui_loginvedio2.h"

namespace Ui {
class LoginVedio1;
}

class LoginVedio1 : public QWidget
{
    Q_OBJECT

public:
    explicit LoginVedio1(QWidget *parent = nullptr);
    ~LoginVedio1();
    void onBtn1Clicked();

private:
    Ui::LoginVedio1 *ui1;
    QMediaPlayer *myplayer1 = nullptr;
    QVideoWidget *mywidget1 = nullptr;

};

#endif // LOGINVEDIO1_H
