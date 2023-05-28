#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<star.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initWindow();

private:
    Ui::MainWindow *ui;

    QGraphicsView mGameView;//游戏视图
    QGraphicsScene mScene;//场景

    QGraphicsPixmapItem mBackGround1;
    QGraphicsPixmapItem mXing;
    QGraphicsPixmapItem mXier;
    QGraphicsPixmapItem mMarch;

};
#endif // MAINWINDOW_H
