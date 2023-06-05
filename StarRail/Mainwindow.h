#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<Xing.h>
#include<Jiachong.h>

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

    void initRole();

private:
    Ui::MainWindow *ui;

    QGraphicsView GameView;//游戏视图
    QGraphicsScene Scene;//场景

    QPixmap BackGround;

    //testBtn
    QPushButton* skillAbtn;
    QPushButton* skillBbtn;
    QPushButton* skillCbtn;
    QVBoxLayout* vboxlayout;

    //testHero
    Xing* xing;

    //testEnemy
    Jiachong* jiachong;
};
#endif // MAINWINDOW_H
