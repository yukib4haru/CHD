#ifndef PLAYER_H
#define PLAYER_H

#include <QWidget>
#include<QMediaPlayer>
#include <QVideoWidget>
#include<QMediaPlaylist>
#include<QFileDialog>
#include<QStringList>
#include<QDebug>


namespace Ui {
class player;
}

class player : public QWidget
{
    Q_OBJECT

public:
    explicit player(QWidget *parent = nullptr);
    ~player();

//protected:
//    void paintEvent(QPaintEvent *event);
//    void timerEvent(QTimerEvent *event);

private slots:
    void on_pushButton1_clicked();
    void on_pushButton2_clicked();
//    void on_pushButton3_clicked();
//    void on_pushButton4_clicked();
//    void on_pushButton5_clicked();

private:
    Ui::player *ui;
    QMediaPlayer *myplayer = nullptr;
    QMediaPlaylist *myplayerlist = nullptr;
    QVideoWidget *mywidget = nullptr;
//    bool isstart = false;

};

#endif // PLAYER_H


