#include "MainWidget.h"
#include "ui_MainWidget.h"

#include"star.h"

#include"Role.h"
#include"Hero.h"
#include"Xing.h"
#include"Enemy.h"
#include"Jiachong.h"

#include<Button.h>


MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    initRole();     //初始化人物
    initWindow();   //初始化窗口
}


MainWidget::~MainWidget()
{
    delete ui;
}



//初始化人物
void MainWidget::initRole()
{
    jiachong = new Jiachong();
    jiachong->bindFunc();

    xing = new Xing();
    xing->bindFunc();
}

//初始化窗口
void MainWidget::initWindow()
{
    //设置窗口大小
    this->setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    //设置图标
    this->setWindowIcon(QIcon(":/Image/StarRail.ico"));

    //初始化人物测试


    //设置视图
    GameView.setSceneRect(QRect(0,0,GAME_WIDTH,GAME_HEIGHT));
    //设置场景
    Scene.setSceneRect(QRect(0,0,GAME_WIDTH,GAME_HEIGHT));
    //设置背景图片
    Background1.setPixmap(QPixmap(":/Image/BK2.png"));

    //图片元素添加到场景
    Scene.addItem(&Background1);

    //添加人物
//    Scene.addItem(test1);
    Scene.addItem(/*&*/xing/*->image*/);
    Scene.addItem(/*&*/jiachong/*->image*/);
    jiachong->/*image.*/setPos(600,0);

    //场景添加到视图 or 设置视图场景
    GameView.setScene(&Scene);
    //设置视图的父亲
    GameView.setParent(this);
    GameView.showFullScreen();
    GameView.show();

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
    this->skillAbtn->move(width()/2,height()/2);

    //同理创建B
    this->skillBbtn = new Button(this);
    this->skillBbtn->setIcon(QIcon(":/Image/xierE0.png"));
    this->skillBbtn->setIconSize(QSize(151,151));
    this->skillBbtn->setFlat(true);
    this->skillBbtn->setFocusPolicy(Qt::NoFocus);
    this->skillBbtn->move(width()/3,height()/3);
    skillBbtn->setCheckable(true);

    //顺序错了，还没创建B怎么连接呢？

    //使两个按钮自动互斥
    skillAbtn->setAutoExclusive(true);
//  skillAbtn->setChecked(true);
    skillBbtn->setAutoExclusive(true);

//    连接按钮
//    connect(skillAbtn,&Button::released,this,&MainWidget::skillAbroadcast);


}

void MainWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,BackGround);
}

void MainWidget::skillAbroadcast()
{
//    emit xing->skillAsignal();
}

void MainWidget::skillBbroadcast()
{

}

void MainWidget::skillCbroadcast()
{

}
