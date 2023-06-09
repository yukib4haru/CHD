#ifndef LOGINVEDIO2_H
#define LOGINVEDIO2_H

#include"star.h"

#include "MainWidget.h"
#include "ui_MainWidget.h"

namespace Ui {
class LoginVedio2;
}

class LoginVedio2 : public QWidget
{
    Q_OBJECT

public:
    explicit LoginVedio2(QWidget *parent = nullptr);
    ~LoginVedio2();
    void onBtn2Clicked();

private:
    Ui::LoginVedio2 *ui2;
    QMediaPlayer *myplayer2 = nullptr;
    QVideoWidget *mywidget2 = nullptr;
};

#endif // LOGINVEDIO2_H
