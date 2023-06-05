#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<star.h>
#include<Xing.h>

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
    void paintEvent(QPaintEvent *event);

private:
    Ui::MainWindow *ui;

    QGraphicsView GameView;//游戏视图
    QGraphicsScene Scene;//场景

    QPixmap BackGround;
<<<<<<< HEAD
    QGraphicsPixmapItem Xing;
    QGraphicsPixmapItem Xier;
    QGraphicsPixmapItem March;
=======

    //test
    QPushButton* skillAbtn;
    QPushButton* skillBbtn;
    QPushButton* skillCbtn;
>>>>>>> 467955446d0fa92a1d4dc5804647c6bee5277964

    QVBoxLayout* vboxlayout;

};
#endif // MAINWINDOW_H
