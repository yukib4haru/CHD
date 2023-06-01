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
//    Hero* xing = new Xing();
}

void MainWindow::paintEvent(QPaintEvent *event)
{ 
    QPainter painter(this);
    painter.drawPixmap(0,0,BackGround);
}
