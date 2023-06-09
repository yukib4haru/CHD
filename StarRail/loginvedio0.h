#ifndef LOGINVEDIO0_H
#define LOGINVEDIO0_H

#include"star.h"

#include "login.h"
#include "ui_login.h"

namespace Ui {
class LoginVedio0;
}

class LoginVedio0 : public QWidget
{
    Q_OBJECT

public:
    explicit LoginVedio0(QWidget *parent = nullptr);
    ~LoginVedio0();
    void onBtn0Clicked();
public slots:
    void mousePressEvent(QMouseEvent *event);

signals:
    void buttonClicked();

private:
    Ui::LoginVedio0 *ui0;
    QMediaPlayer *myplayer0 = nullptr;
    QVideoWidget *mywidget0 = nullptr;


};

#endif // LOGINVEDIO0_H

