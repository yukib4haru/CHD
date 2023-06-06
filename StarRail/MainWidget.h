#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include<star.h>
#include<Xing.h>
#include<Jiachong.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = nullptr);
    void initWindow();
    void paintEvent(QPaintEvent *event);

    void initRole();

private:
    Ui::MainWidget *ui;

    QGraphicsView GameView;//游戏视图
    QGraphicsScene Scene;//场景

    QPixmap BackGround;

    //图形元素
    QGraphicsPixmapItem Background1;
    QGraphicsPixmapItem* test1;

    //testBtn
    QPushButton* skillAbtn;
    QPushButton* skillBbtn;
    QPushButton* skillCbtn;
    QVBoxLayout* vboxlayout;

    //testHero
//    QGraphicsPixmapItem* xing;
    Xing* xing;

    //testEnemy
    QGraphicsPixmapItem* jiachong;

signals:

};

#endif // MAINWIDGET_H
