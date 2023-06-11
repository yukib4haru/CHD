#include "loginvedio0.h"
#include "ui_loginvedio0.h"

LoginVedio0::LoginVedio0(QWidget *parent) :
    QWidget(parent),
    ui0(new Ui::LoginVedio0)
{
    ui0->setupUi(this);
    setWindowTitle("LoginVedio0");
    myplayer0 = new QMediaPlayer(this);	//实例化QMediaPlayer
    mywidget0 = new QVideoWidget(this);	//实例化QVideoWidget
    mywidget0->resize(1600,900);
    myplayer0->setVideoOutput(mywidget0);	//设置player的视频输出对象
    myplayer0->setMedia(QUrl::fromLocalFile("D:/College/GitHub/CHD/StarRail/Rail/LoginCut0.mp4"));	//设置播放内容路径
    mywidget0->show();
    myplayer0->play();
    ui0->btn0->setStyleSheet("background-color: rgba(0, 0, 0, 0);");
    connect(ui0->btn0, &QPushButton::clicked, this, &LoginVedio0::onBtn0Clicked);
    connect(myplayer0, &QMediaPlayer::stateChanged, [=](QMediaPlayer::State state) {
        if (state == QMediaPlayer::StoppedState) {  // 播放结束后
            myplayer0->play();  // 重新播放
        }
    });
//    connect(&timer, &QTimer::timeout, this, &LoginVedio0::onBtn0Clicked);



}

void LoginVedio0::onBtn0Clicked()
{
    this->close();
    mywidget0->deleteLater();
    myplayer0->deleteLater();
    login *login1 = new login;
    login1->show();

//    LoginVedio1 *loginlogin1 = new LoginVedio1;
//    loginlogin1->show();
}

//void LoginVedio0::mousePressEvent(QMouseEvent *event)
//{
//    if (event->button() == Qt::LeftButton) {
//        timer.start(300);
//    }
//}

//void LoginVedio0::mouseReleaseEvent(QMouseEvent *event)
//{
//    timer.stop();
//}



void LoginVedio0::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
            emit buttonClicked();
            qDebug() <<"pressed";
        }

}



LoginVedio0::~LoginVedio0()
{
    delete ui0;
    myplayer0->deleteLater();
    mywidget0->deleteLater();
}


