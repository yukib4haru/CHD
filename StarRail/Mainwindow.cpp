#include "Mainwindow.h"
#include "ui_Mainwindow.h"
#include<star.h>

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
    setFixedSize(WEIGHT,HEIGHT);

    mGameView.setSceneRect(QRect(0,0,WEIGHT,HEIGHT));
    mScene.setSceneRect(QRect(0,0,WEIGHT,HEIGHT));

    mBackGround1.setPixmap(QPixmap(":/Image/bgTest.png"));  //与QImage用法类似
    mXing.setPixmap(QPixmap(":/Image/Xing.png"));
    mXing.setPos(800,400);
    //图片元素添加到场景
    mScene.addItem(&mBackGround1);
    mScene.addItem(&mXing);
    //设置视图场景
    mGameView.setScene(&mScene);
    //设置视图的父亲为窗口
    mGameView.setParent(this);
    mGameView.show();
}
