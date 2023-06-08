#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include"star.h"
#include"Xing.h"
#include"xier.h"
#include"Natasha.h"
#include"Jiachong.h"
#include"Button.h"

#include"Turnmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    //explicit关键字  修饰函数 参数 无法自动转换类型 防止隐式转换
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();
    //各种初始化函数
    void initWindow();
    void initRole();
    void initButton();
    void initManager();
    void buttonBond();

private:
    Ui::MainWidget *ui;

    QGraphicsView GameView;//游戏视图
    QGraphicsScene Scene;//场景

    //图形元素
    QGraphicsPixmapItem Background1;
    QGraphicsPixmapItem* test1;

    //testBtn
    Button* skillAbtn;
    Button* skillBbtn;
    Button* skillCbtn;
    QVBoxLayout* vboxlayout;

    //BtnGroup
    QButtonGroup* box1 ;

    //testHero
    Xing* xing;
    Xier* xier;
    Natasha* natasha;

    //testEnemy
    Jiachong* jiachong;

    //对象向量组
    vector<Role*> heroes;
    vector<Role*> enermies;
    vector<Role*> roles;

    //一些数值
    int skillPoint = 3;
    int enemiesNum = 3;

    //事件处理
    //轮次处理
    TurnManager* turnmanager;
public slots:
    //信号广播槽函数
    void skillAbroadcast();
    void skillBbroadcast();
    void skillCbroadcast();
    //战技点槽函数
    void skillPointUp();
    void skillPointDown();
    //图形处理槽函数
    void someoneDie(Role* p);
signals:

};

#endif // MAINWIDGET_H
