#include "player.h"
#include "ui_player.h"

player::player(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::player)
{
    ui->setupUi(this);
setWindowTitle("player");
    myplayer = new QMediaPlayer;
//    myplayerlist = new QMediaPlaylist;
    mywidget = new QVideoWidget(this);
//    ui->label->show();

//    myplayer->setPlaylist(myplayerlist);
    myplayer->setVideoOutput(mywidget);
    mywidget->resize(1600,900);
//    setWindowTitle("音视频播放器");
    myplayer->setVolume(50);
    myplayer->setMedia(QUrl::fromLocalFile("D:/QTProject/GitHub/CHD/StarRail/Rail/Wildfire.mp3"));
    mywidget->show();
    myplayer->play();
    connect(myplayer, &QMediaPlayer::stateChanged, [=](QMediaPlayer::State state) {
        if (state == QMediaPlayer::StoppedState) {  // 播放结束后
            myplayer->play();  // 重新播放
        }
    });
}

player::~player()
{
    delete ui;
//    delete mywidget;
//    delete myplayer;
    myplayer->deleteLater();
    mywidget->deleteLater();
}


//void player::paintEvent(QPaintEvent *event)
//{
//    mywidget->resize(ui->label->size());
//}

//void player::on_pushButton1_clicked()
//{
//    QStringList mylist = QFileDialog::getOpenFileNames(this,"选择播放资源","D:\\QTProject\\GitHub\\CHD\\StarRail\\Rail","allfiles(*.*);;""MP3(*.mp3);;""MP4(*.mp4)");
//    /*"allfiles(*.*);;"*/
//    myplayerlist->clear();//清空之前缓存
//    for(const auto & k : mylist)
//        myplayerlist->addMedia(QUrl(k));
//}

//void player::on_pushButton2_clicked()
//{
//    myplayer->play();

//    if(isstart)
//    {
//        ui->pushButton2->setStyleSheet("QPushButton#pushButton2{border-image:url(:/)}");//设置样式图
//        isstart=false;
//        myplayer->pause();
//    }
//    else
//    {
//        ui->pushButton2->setStyleSheet("QPushButton#pushButton2{border-image:url(:/)}");
//        isstart=true;
//        myplayer->play();
//        ui->pushButton3->setEnabled(true);
//    }
//}

//停止播放
//void player::on_pushButton3_clicked()
//{
//    myplayer->stop();
//    ui->pushButton3->setEnabled(false);
//        ui->pushButton2->setStyleSheet("QPushButton#pushButton2{border-image:url(:/)}");//设置样式图

//}

//前一个文件
//void player::on_pushButton4_clicked()
//{
//    myplayer->stop();
//    myplayerlist->previous();
//    myplayer->play();
//}

//后一个文件
//void player::on_pushButton5_clicked()
//{
//    myplayer->stop();
//    myplayerlist->next();
//    myplayer->play();
//}


