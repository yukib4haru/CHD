#include "loginvedio1.h"
#include "ui_loginvedio1.h"

LoginVedio1::LoginVedio1(QWidget *parent) :
    QWidget(parent),
    ui1(new Ui::LoginVedio1)
{
    ui1->setupUi(this);
    setWindowTitle("LoginVedio1");
    myplayer1 = new QMediaPlayer(this);	//实例化QMediaPlayer
    mywidget1 = new QVideoWidget(this);	//实例化QVideoWidget
    mywidget1->resize(1600,900);
    myplayer1->setVideoOutput(mywidget1);	//设置player的视频输出对象
    myplayer1->setMedia(QUrl::fromLocalFile("D:/QTProject/GitHub/CHD/StarRail/Rail/LoginCut1.mp4"));	//设置播放内容路径
    mywidget1->show();
    myplayer1->play();
    connect(myplayer1, &QMediaPlayer::stateChanged, [=](QMediaPlayer::State state) {
        if (state == QMediaPlayer::StoppedState) {  // 播放结束后
            myplayer1->play();  // 重新播放
        }
    });
    ui1->btn1->setStyleSheet("background-color: rgba(0, 0, 0, 0);");
    connect(ui1->btn1, &QPushButton::clicked, this, &LoginVedio1::onBtn1Clicked);

}

void LoginVedio1::onBtn1Clicked()
{
    this->close();
    mywidget1->deleteLater();
    myplayer1->deleteLater();
    LoginVedio2 *loginlogin2 = new LoginVedio2;
    loginlogin2->show();
}

LoginVedio1::~LoginVedio1()
{
    delete ui1;
    myplayer1->deleteLater();
    mywidget1->deleteLater();
}

