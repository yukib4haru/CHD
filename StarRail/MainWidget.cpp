#include "MainWidget.h"
#include "ui_MainWidget.h"

#include"star.h"

#include"Button.h"

#include"Role.h"
#include"Hero.h"
#include"Xing.h"
#include"Natasha.h"
#include"Enemy.h"
#include"Jiachong.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    initManager();
    initRole();     //初始化人物 必须放在初始化窗口前面
    initWindow();   //初始化窗口
    initButton();   //初始化按钮
    initMoveTimer();//初始化移动计时器
    buttonBond();   //连接
}


MainWidget::~MainWidget()
{
    delete ui;
}

//初始化事件
void MainWidget::initManager()
{
    turnmanager = new TurnManager(heroes,enermies);
}

//初始化人物
void MainWidget::initRole()
{
    jiachong = new Jiachong();
    jiachong->bindFunc();

    xing = new Xing();
    xing->bindFunc();

    xier = new Xier();
    xier->bindFunc();

    natasha = new Natasha();
    natasha->bindFunc();
}

//初始化窗口
void MainWidget::initWindow()
{
    //设置窗口大小
    this->setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    //设置图标
    this->setWindowIcon(QIcon(":/Image/StarRail.ico"));
    //设置视图
    GameView.setSceneRect(QRect(0,0,GAME_WIDTH,GAME_HEIGHT));
    //设置场景
    Scene.setSceneRect(QRect(0,0,GAME_WIDTH,GAME_HEIGHT));
    //设置背景图片
    Background1.setPixmap(QPixmap(":/Image/BK2.png"));

    //图片元素添加到场景
    Scene.addItem(&Background1);

    //添加人物
    Scene.addItem(xing);
    Scene.addItem(xier);
    Scene.addItem(natasha);
    Scene.addItem(jiachong);

    //场景添加到视图 or 设置视图场景
    GameView.setScene(&Scene);
    //设置视图的父亲
    GameView.setParent(this);
    GameView.showFullScreen();
    GameView.show();
}

//初始化按钮
void MainWidget::initButton()
{
    //试创建按钮A
    this->skillAbtn = new Button(this);
    this->skillAbtn->setIcon(QIcon(":/Image/xierQ1.png"));//设置技能图标
    this->skillAbtn->setIconSize(QSize(300,300));//设置技能大小
    //使其成为一个可选按钮
    skillAbtn->setCheckable(true);

    //设置透明边框
    this->skillAbtn->setFlat(true);
    this->skillAbtn->setFocusPolicy(Qt::NoFocus);
    //移动按钮
    this->skillAbtn->move(width()*3/4,height()*2/3);

    //同理创建B
    this->skillBbtn = new Button(this);
    this->skillBbtn->setIcon(QIcon(":/Image/xierE0.png"));
    this->skillBbtn->setIconSize(QSize(151,151));
    this->skillBbtn->setFlat(true);
    this->skillBbtn->setFocusPolicy(Qt::NoFocus);
    this->skillBbtn->move(width()*3/4 - 50,height()*2/3 - 75);
    skillBbtn->setCheckable(true);

    //顺序错了，还没创建B怎么连接呢？

    //使两个按钮自动互斥
    skillAbtn->setAutoExclusive(true);
//  skillAbtn->setChecked(true);
    skillBbtn->setAutoExclusive(true);
}

//初始化移动计时器
void MainWidget::initMoveTimer()
{
    movetimer = new MoveTimer;
}

//信号和槽连接
void MainWidget::buttonBond()
{
    //实现星的A按钮
    connect(skillAbtn,&Button::clicked,this,&MainWidget::skillAbroadcast);
    connect(skillAbtn,&Button::clicked,jiachong,&Jiachong::showBasicStatus);
    connect(skillAbtn,&Button::clicked,this,&MainWidget::skillPointUp);
    connect(xing,&Xing::skillAsignal,xing,&Xing::skillA);
    connect(xing,&Xing::skillAdamage,jiachong,&Jiachong::beAttacked);
    //实现星A技能移动
    connect(xing,&Xing::skillAsignal,jiachong,&Jiachong::beMoved);
    connect(movetimer,&MoveTimer::timeout,xing,&Xing::moveTo);
    connect(jiachong,&Jiachong::getValueXing,movetimer,&MoveTimer::beTriggeredStart);
    connect(jiachong,&Jiachong::getValueXing,xing,&Xing::setDistance);

    //实现星的B按钮
    connect(skillBbtn,&Button::clicked,this,&MainWidget::skillBbroadcast);
    connect(skillBbtn,&Button::clicked,jiachong,&Jiachong::showBasicStatus);
    connect(skillBbtn,&Button::clicked,this,&MainWidget::skillPointDown);
    connect(xing,&Xing::skillBsignal,xing,&Xing::skillB);
    connect(xing,&Xing::skillBbuff,xing,&Xing::beGivenShieldBuff);
}

void MainWidget::skillAbroadcast()
{
    emit xing->skillAsignal();
    qDebug()<<"发送星的A技能的信号\n";
}

void MainWidget::skillBbroadcast()
{
    emit xing->skillBsignal();
    qDebug()<<"发送星的B技能的信号\n";
}

void MainWidget::skillCbroadcast()
{
    emit xing->skillCsignal();
    qDebug()<<"发送星的C技能的信号\n";
}

//void MainWidget::buttonBond()
//{
//    //实现娜塔莎的A按钮
//    connect(skillAbtn,&Button::clicked,this,&MainWidget::skillAbroadcast);
//    connect(skillAbtn,&Button::clicked,jiachong,&Jiachong::showBasicStatus);
//    connect(skillAbtn,&Button::clicked,this,&MainWidget::skillPointUp);
//    connect(natasha,&Natasha::skillAsignal,natasha,&Natasha::skillA);
//    connect(natasha,&Natasha::skillAdamage,jiachong,&Jiachong::beAttacked);
//    //实现星的B按钮
//    connect(skillBbtn,&Button::clicked,this,&MainWidget::skillBbroadcast);
//    connect(skillBbtn,&Button::clicked,jiachong,&Jiachong::showBasicStatus);
//    connect(skillBbtn,&Button::clicked,this,&MainWidget::skillPointDown);
//    connect(natasha,&Natasha::skillBsignal,natasha,&Natasha::skillB);
//    connect(natasha,&Natasha::skillBcure,xing,&Xing::beCured);
//}

//void MainWidget::skillAbroadcast()
//{
//    emit natasha->skillAsignal();
//    qDebug()<<"发送娜塔莎的A技能的信号\n";
//}

//void MainWidget::skillBbroadcast()
//{
//    if(skillPoint>0)
//    {
//        emit natasha->skillBsignal();
//        qDebug()<<"发送娜塔莎的B技能的信号\n";
//    }
//    else
//    {
//        qDebug()<<"战技点不足\n";
//    }
//}

//void MainWidget::skillCbroadcast()
//{
//    emit xing->skillCsignal();
//    qDebug()<<"发送星的C技能的信号\n";
//}

void MainWidget::skillPointUp()
{
    if(skillPoint<SKILL_POINT_MAX) skillPoint++;
    qDebug()<<"战技点："<<skillPoint<<"\n";
}

void MainWidget::skillPointDown()
{
    if(skillPoint>SKILL_POINT_LEAST) skillPoint--;
    qDebug()<<"战技点："<<skillPoint<<"\n";
}
