#include "loginvedio2.h"
#include "ui_loginvedio2.h"



LoginVedio2::LoginVedio2(QWidget *parent) :
    QWidget(parent),
    ui2(new Ui::LoginVedio2)
{
    ui2->setupUi(this);
    setWindowTitle("LoginVedio2");
    myplayer2 = new QMediaPlayer(this);	//实例化QMediaPlayer
    mywidget2 = new QVideoWidget(this);	//实例化QVideoWidget
    mywidget2->resize(1600,900);
    myplayer2->setVideoOutput(mywidget2);	//设置player的视频输出对象
    myplayer2->setMedia(QUrl::fromLocalFile("D:/QTProject/GitHub/CHD/StarRail/Rail/LoginCut2.mp4"));	//设置播放内容路径
    mywidget2->show();
    myplayer2->play();
    connect(myplayer2, &QMediaPlayer::stateChanged, [=](QMediaPlayer::State state) {
        if (state == QMediaPlayer::StoppedState) {  // 播放结束后
            myplayer2->play();  // 重新播放
        }
    });
    ui2->btn2->setStyleSheet("background-color: rgba(0, 0, 0, 0);");
    connect(ui2->btn2, &QPushButton::clicked, this, &LoginVedio2::onBtn2Clicked);

}

void LoginVedio2::onBtn2Clicked()
{
    this->close();
    mywidget2->deleteLater();
    myplayer2->deleteLater();
    MainWidget *mainwidget = new MainWidget;
    mainwidget->show();
}


LoginVedio2::~LoginVedio2()
{
    delete ui2;
    myplayer2->deleteLater();
    mywidget2->deleteLater();
}
