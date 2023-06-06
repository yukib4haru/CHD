#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include<star.h>
#include<Xing.h>
#include<Jiachong.h>

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = nullptr);
    void initWindow();
    void paintEvent(QPaintEvent *event);

    void initRole();

private:
    QGraphicsView GameView;//游戏视图
    QGraphicsScene Scene;//场景

    QPixmap BackGround;

    //图形元素
    QGraphicsPixmapItem Background1;

    //testBtn
    QPushButton* skillAbtn;
    QPushButton* skillBbtn;
    QPushButton* skillCbtn;
    QVBoxLayout* vboxlayout;

    //testHero
    Xing* xing;

    //testEnemy
    Jiachong* jiachong;

signals:

};

#endif // MAINWIDGET_H
