#include "MainWidget.h"
#include "ui_MainWidget.h"

#include"star.h"
#include"Role.h"
#include"Hero.h"
#include"Xing.h"

#include"Enemy.h"
#include"Jiachong.h"



MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    initRole();     //初始化人物
    initWindow();   //初始化窗口
}

void MainWidget::initRole()
{
    jiachong = new Jiachong();
}

void MainWidget::initWindow()
{
    //设置窗口大小
    this->setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    //设置图标
    this->setWindowIcon(QIcon(":/Image/StarRail.ico"));
    //设置场景
    QGraphicsScene* scene = new QGraphicsScene();

    //初始化人物测试
//    xing = new Xing();

    //设置视图
    GameView.setSceneRect(QRect(0,0,GAME_WIDTH,GAME_HEIGHT));
    //设置场景
    Scene.setSceneRect(QRect(0,0,GAME_WIDTH,GAME_HEIGHT));
    //设置背景图片
    Background1.setPixmap(QPixmap(":/Image/BK2.png"));
    test1.setPixmap(QPixmap(":/Image/Xing.png"));

    //图片元素添加到场景
    Scene.addItem(&Background1);
    //添加人物

//    Scene.addItem(&test1);
    Scene.addItem(&xing);
    xing.show();
    xing.setFlag(QGraphicsItem::ItemIgnoresTransformations);

    //场景添加到视图 or 设置视图场景
    GameView.setScene(&Scene);
    //设置视图的父亲
    GameView.setParent(this);
    GameView.showFullScreen();
    GameView.show();

    //试创建按钮A
    this->skillAbtn = new QPushButton(this);
    this->skillAbtn->setIcon(QIcon(":/Image/xierQ1.png"));//设置技能图标
    this->skillAbtn->setIconSize(QSize(300,300));//设置技能大小
    //设置透明边框
    this->skillAbtn->setFlat(true);
    this->skillAbtn->setFocusPolicy(Qt::NoFocus);
    //移动按钮
    this->skillAbtn->move(width()/2,height()/2);

    //同理创建B
    this->skillBbtn = new QPushButton(this);
    this->skillBbtn->setIcon(QIcon(":/Image/xierE0.png"));
    this->skillBbtn->setIconSize(QSize(151,151));
    this->skillBbtn->setFlat(true);
    this->skillBbtn->setFocusPolicy(Qt::NoFocus);
    this->skillBbtn->move(width()/3,height()/3);
}

void MainWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,BackGround);
}

