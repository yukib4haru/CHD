#include "Mainwindow.h"
#include "ui_Mainwindow.h"

#include"star.h"
#include"Xing.h"
#include"Hero.h"
#include"Role.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initWindow();   //初始化窗口
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initWindow()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    BackGround.load(":/Image/bgTest.png");

    QGraphicsScene* scene = new QGraphicsScene();

    this->skillAbtn = new QPushButton(this);
    this->skillAbtn->setIcon(QIcon(":/Image/xierE0.png"));
    this->skillAbtn->setIconSize(QSize(151,151));
    this->skillAbtn->setFlat(true);
    this->skillAbtn->setFocusPolicy(Qt::NoFocus);

    this->skillBbtn = new QPushButton(this);
    this->skillBbtn->setIcon(QIcon(":/Image/xierQ1.png"));
    this->skillBbtn->setIconSize(QSize(300,300));
    this->skillBbtn->setFlat(true);
//    this->skillBbtn->setFocusPolicy(Qt::NoFocus);

}

void MainWindow::paintEvent(QPaintEvent *event)
{ 
    QPainter painter(this);
    painter.drawPixmap(0,0,BackGround);
}
