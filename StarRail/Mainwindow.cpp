#include "Mainwindow.h"
#include "ui_Mainwindow.h"

#include"star.h"
#include"Role.h"
#include"Hero.h"
#include"Xing.h"

#include"Enemy.h"
#include"Jiachong.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initWindow();   //初始化窗口
    initRole();     //初始化人物
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initWindow()
{
    this->setFixedSize(GAME_WIDTH,GAME_HEIGHT); //设置窗口大小
    this->setWindowIcon(QIcon(":/Image/StarRail.ico"));
    //设置背景图片
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/Image/BK2.png")));
    this->setPalette(palette);

//    QGraphicsScene* scene = new QGraphicsScene();

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

void MainWindow::initRole()
{
    xing = new Xing();
    jiachong = new Jiachong();
}

//void MainWindow::paintEvent(QPaintEvent *event)
//{
//    QPainter painter(this);
//    painter.drawPixmap(0,0,BackGround);
//}
