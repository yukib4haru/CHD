#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include<star.h>
#include<Xing.h>
#include<Jiachong.h>
#include<Button.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    //explicit关键字  修饰函数 参数 无法自动转换类型 防止隐式转换
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
    Button* skillAbtn;
    Button* skillBbtn;
    Button* skillCbtn;
    QVBoxLayout* vboxlayout;

    //testHero
    Xing* xing;

    //testEnemy
    Jiachong* jiachong;

signals:

};

#endif // MAINWIDGET_H
