#include "Mainwindow.h"
#include "ui_Mainwindow.h"
<<<<<<< HEAD
<<<<<<< HEAD
#include<star.h>
#include <QWidget>
=======
=======
>>>>>>> 467955446d0fa92a1d4dc5804647c6bee5277964

#include"star.h"
#include"Xing.h"
#include"Hero.h"
#include"Role.h"
<<<<<<< HEAD
>>>>>>> 7dd0af3e31e9856081eaf2dfe0d941ff466b9fc1
=======
>>>>>>> 467955446d0fa92a1d4dc5804647c6bee5277964

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
<<<<<<< HEAD
//    Hero* xing = new Xing();
=======

    this->skillAbtn = new QPushButton(this);
//    skillAbtn->setIcon()
>>>>>>> 467955446d0fa92a1d4dc5804647c6bee5277964
}

void MainWindow::paintEvent(QPaintEvent *event)
{ 
    QPainter painter(this);
    painter.drawPixmap(0,0,BackGround);
}
