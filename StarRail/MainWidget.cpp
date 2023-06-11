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

#include "player.h"
#include "ui_player.h"


MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    player *player1 = new player;
    player1->show();
    player1->setParent(this);
    initDate();   //初始化数据
    initPen();      //初始化画笔
    initRole();     //初始化人物 必须放在初始化窗口前面
    initMoveTimer();//初始化移动计时器
    initManager();  //初始化事件，应该要放在人物后边吧
    initWindow();   //初始化窗口
    initButton();   //初始化按钮
    buttonBond();   //连接
}

MainWidget::~MainWidget()
{
    delete ui;
}

//初始化事件
void MainWidget::initManager()
{
    heroes = {xing,xier,natasha};
    enermies = {jiachong};
    roles = {xing,xier,natasha,jiachong};
    turnmanager = new TurnManager(heroes,enermies,roles);
    turnmanager->init();
}

//初始化画笔
void MainWidget::initPen()
{
    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);
}

//初始化人物
void MainWidget::initRole()
{
    jiachong = new Jiachong();
    jiachong->lifebar->setPen(pen);
    jiachong->bindFunc();

    xing = new Xing();
    jiachong->lifebar->setPen(pen);
    xing->bindFunc();

    xier = new Xier();
    jiachong->lifebar->setPen(pen);
    xier->bindFunc();

    natasha = new Natasha();
    jiachong->lifebar->setPen(pen);
    natasha->bindFunc();
}

void MainWidget::initDate()
{
    skillPoint = 3;
    enemiesNum = 1;
}

//释放
void MainWidget::delAll()
{
    delete jiachong;
    delete xing;
    delete xier;
    delete natasha;
    delete skillAbtn;
    delete skillBbtn;
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
    GameView.setGeometry(0, 0, GAME_WIDTH, GAME_HEIGHT);
    GameView.setParent(this);

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

    Scene.addItem(jiachong->lifebar);
    Scene.addItem(xing->lifebar);
    Scene.addItem(xier->lifebar);
    Scene.addItem(natasha->lifebar);

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
//    skillAbtn->setCheckable(true);

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
//    skillBbtn->setCheckable(true);

    //顺序错了，还没创建B怎么连接呢？

    //设置父亲
    skillAbtn->setParent(this);
    skillBbtn->setParent(this);

//    //使两个按钮自动互斥
//    skillAbtn->setAutoExclusive(true);
////  skillAbtn->setChecked(true);
//    skillBbtn->setAutoExclusive(true);
}

//初始化移动计时器
void MainWidget::initMoveTimer()
{
    movetimer1 = new MoveTimer;
    movetimer2a = new MoveTimer;
    movetimer3 = new MoveTimer;
    movetimer2b = new MoveTimer;
}


//信号和槽连接
void MainWidget::buttonBond()
{
    //实现A按钮
    connect(skillAbtn,&Button::clicked,this,&MainWidget::skillAbroadcast);
//    connect(skillAbtn,&Button::clicked,jiachong,&Jiachong::showBasicStatus);
    connect(skillAbtn,&Button::clicked,this,&MainWidget::skillPointUp);

    //接收到的信号为星，则由星发动,实现星A技能移动
    connect(xing,&Xing::skillAsignal,jiachong,&Jiachong::beMovedXing);
    connect(movetimer1,&MoveTimer::timeout,xing,&Xing::moveTo);
    connect(jiachong,&Jiachong::getValueXing,movetimer1,&MoveTimer::beTriggeredStart);
    connect(xing,&Xing::moveOver,movetimer1,&MoveTimer::beTriggeredStop);
    connect(jiachong,&Jiachong::getValueXing,xing,&Xing::setDistance);
    connect(xing,&Xing::moveOver,xing,&Xing::skillA);
    connect(xing,&Xing::skillAdamage,jiachong,&Jiachong::beAttacked);
    //接收到的信号为希尔，则由希尔发动
    connect(xier,&Xier::skillAsignal,jiachong,&Jiachong::beMovedXier);
    connect(movetimer2a,&MoveTimer::timeout,xier,&Xier::moveTo);
    connect(jiachong,&Jiachong::getValueXier,movetimer2a,&MoveTimer::beTriggeredStart);
    connect(xier,&Xier::moveOver,movetimer2a,&MoveTimer::beTriggeredStop);
    connect(jiachong,&Jiachong::getValueXier,xier,&Xier::setDistance);
    connect(xier,&Xier::moveOver,xier,&Xier::skillA);
    connect(xier,&Xier::skillAdamage,jiachong,&Jiachong::beAttacked);
    //接收到的信号为娜塔莎，则由娜塔莎发动
    connect(natasha,&Natasha::skillAsignal,jiachong,&Jiachong::beMovedNatasha);
    connect(movetimer3,&MoveTimer::timeout,natasha,&Natasha::moveTo);
    connect(jiachong,&Jiachong::getValueNatasha,movetimer3,&MoveTimer::beTriggeredStart);
    connect(natasha,&Natasha::moveOver,movetimer3,&MoveTimer::beTriggeredStop);
    connect(jiachong,&Jiachong::getValueNatasha,natasha,&Natasha::setDistance);
    connect(natasha,&Natasha::moveOver,natasha,&Natasha::skillA);
    connect(natasha,&Natasha::skillAdamage,jiachong,&Jiachong::beAttacked);

    //实现B按钮
    connect(skillBbtn,&Button::clicked,this,&MainWidget::skillBbroadcast);
    connect(skillBbtn,&Button::clicked,jiachong,&Jiachong::showBasicStatus);
    connect(skillBbtn,&Button::clicked,this,&MainWidget::skillPointDown);
    //接收到的信号为星，则由星发动
    connect(xing,&Xing::skillBsignal,xing,&Xing::skillB);
    connect(xing,&Xing::skillBbuff,xing,&Xing::beGivenShieldBuff);
    //接收到的信号为希尔，则由希尔发动
    connect(xier,&Xier::skillBsignal,jiachong,&Jiachong::beMovedXier);
    connect(movetimer2b,&MoveTimer::timeout,xier,&Xier::moveTo);
    connect(jiachong,&Jiachong::getValueXier,movetimer2b,&MoveTimer::beTriggeredStart);
    connect(xier,&Xier::moveOver,movetimer2b,&MoveTimer::beTriggeredStop);
    connect(jiachong,&Jiachong::getValueXier,xier,&Xier::setDistance);
    connect(xier,&Xier::moveOver,xier,&Xier::skillA);
    connect(xier,&Xier::skillBdamage,jiachong,&Jiachong::beAttacked);
    //接收到的信号为娜塔莎，则由娜塔莎发动
    connect(natasha,&Natasha::skillBsignal,natasha,&Natasha::skillB);
    connect(natasha,&Natasha::skillBcure,natasha,&Natasha::beCured);
    connect(natasha,&Natasha::skillBcure,xier,&Xier::beCured);
    connect(natasha,&Natasha::skillBcure,xing,&Xing::beCured);

    //实现血条变化
    connect(jiachong,&Jiachong::lifebarChangedSignal,jiachong->lifebar,&Lifebar::lifebarchanged);
    connect(xing,&Xing::lifebarChangedSignal,xing->lifebar,&Lifebar::lifebarchanged);
    connect(xier,&Xier::lifebarChangedSignal,xier->lifebar,&Lifebar::lifebarchanged);
    connect(natasha,&Natasha::lifebarChangedSignal,natasha->lifebar,&Lifebar::lifebarchanged);

    connect(jiachong,&Jiachong::imKilled,this,&MainWidget::someoneDie);
    //连接其他角色死亡信号
    connect(xing,&Xing::imKilled,this,&MainWidget::someoneDie);
    connect(xier,&Xier::imKilled,this,&MainWidget::someoneDie);
    connect(natasha,&Natasha::imKilled,this,&MainWidget::someoneDie);
}



//技能A广播
void MainWidget::skillAbroadcast()
{
    qDebug()<<"是谁的A技能的信号被发送了呢\n";
    if(turnmanager->getCurRole()==xing)
    {
        emit xing->skillAsignal();
        qDebug()<<"发送星的A技能的信号\n";
    }
    if(turnmanager->getCurRole()==natasha)
    {
        emit natasha->skillAsignal();
        qDebug()<<"发送娜塔莎的A技能的信号\n";
    }
    if(turnmanager->getCurRole()==xier)
    {
        emit xier->skillAsignal();
        qDebug()<<"发送希尔的A技能的信号\n";
    }
    turnmanager->update();
}

//技能B广播
void MainWidget::skillBbroadcast()
{
    if(skillPoint>0)
    {
        if(turnmanager->getCurRole()==xing)
        {
            emit xing->skillBsignal();
            qDebug()<<"发送星的B技能的信号\n";
        }
        if(turnmanager->getCurRole()==natasha)
        {
            emit natasha->skillBsignal();
            qDebug()<<"发送娜塔莎的B技能的信号\n";
        }
        if(turnmanager->getCurRole()==xier)
        {
            emit xier->skillBsignal();
            qDebug()<<"发送希尔的B技能的信号\n";
        }
    }
    else
    {
        qDebug()<<"战技点不足\n";
    }
    //update函数里的getname存在问题
    turnmanager->update();
}

//技能C广播
void MainWidget::skillCbroadcast()
{
    if(turnmanager->getCurRole()==xing)
    {
        emit xing->skillCsignal();
        qDebug()<<"发送星的C技能的信号\n";
    }
    if(turnmanager->getCurRole()==natasha)
    {
        emit natasha->skillCsignal();
        qDebug()<<"发送娜塔莎的C技能的信号\n";
    }
    if(turnmanager->getCurRole()==xier)
    {
        emit xier->skillCsignal();
        qDebug()<<"发送希尔的C技能的信号\n";
    }
    turnmanager->update();
}

//战技点增加
void MainWidget::skillPointUp()
{
    if(skillPoint<SKILL_POINT_MAX) skillPoint++;
    qDebug()<<"战技点："<<skillPoint<<"\n";
}

//战技点减少
void MainWidget::skillPointDown()
{
    if(skillPoint>SKILL_POINT_LEAST) skillPoint--;
    qDebug()<<"战技点："<<skillPoint<<"\n";
}

//死亡就移除
void MainWidget::someoneDie(Role* p)
{
    Scene.removeItem(p);
    QTimer *newEnemytimer = new QTimer(this);
    newEnemytimer->setInterval(1000);  // 1秒

//    for (auto it = heroes.begin(); it != heroes.end(); ++it)
//    {
//        if (*it == p)
//        {
//            turnmanager->heroes.erase(it);
//           turnmanager->roles.erase(it);
//            roles.erase(it);
//            break;   // 删除后跳出循环
//        }
//    }

    if(p==jiachong)
    {
        enemiesNum--;
//        newEnemy1 = new Jiachong();
//        turnmanager->enemies.pop_back();
//        turnmanager->enemies.push_back(newEnemy1);
        //开始计时
        newEnemytimer->start();
    }

    if(p==newEnemy1)
    {
        enemiesNum--;
//        newEnemy2 = new Jiachong();
//        turnmanager->enemies.pop_back();
//        turnmanager->enemies.push_back(newEnemy2);
        //开始计时
        newEnemytimer->start();
    }

    connect(newEnemytimer, &QTimer::timeout, [=](){
        // 1秒后,实例化新敌人
        if(enemiesNum==2)
        {
//            Scene.addItem(newEnemy1);
            newEnemytimer->stop();
        }
        if(enemiesNum==1)
        {
//            Scene.addItem(newEnemy2);
            newEnemytimer->stop();
        }
    });
    if(enemiesNum==0) GameOver();
}

//游戏结束
void MainWidget::GameOver()
{
    QTimer *gameOverTimer = new QTimer(this);
    gameOverTimer->setInterval(750);

    gameOver = new QGraphicsPixmapItem(QPixmap(":/Image/gameOver1.png"));
    gameOverTimer->start();

    restartBtn = new QPushButton("重新开始");

    connect(gameOverTimer, &QTimer::timeout, this, [=]() {
        Scene.addItem(gameOver);
        Scene.addWidget(restartBtn);
        restartBtn->setGeometry(1200, 300 , 200, 50);
        restartBtn->setFont(QFont("Courier", 15));
        gameOverTimer->stop();
    });

    connect(restartBtn, &QPushButton::clicked, [=]() {
        // 清空场景
        Scene.removeItem(gameOver);
        restartBtn->setGeometry(-200, -200, 200, 50);

        // 重置变量
        initRole();     //初始化人物 必须放在初始化窗口前面
        initManager();  //初始化事件，应该要放在人物后边吧
        initWindow();   //初始化窗口
        initButton();
        initManager();
        initDate();
        buttonBond();
        jiachong->showBasicStatus();
        xing->showBasicStatus();
        xier->showBasicStatus();
        natasha->showBasicStatus();
    });

}
