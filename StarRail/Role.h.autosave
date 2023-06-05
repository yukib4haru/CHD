#ifndef ROLE_H
#define ROLE_H

#include<star.h>
// #include<Mainwindow.h>

class Role:public QGraphicsItem
{
public:
    Role();
    ~Role();
    //动画
    void showRole();
    void death();
    //登场顺序
    void entryOrder(Role* p);
private:
    string name;
    double hp;
    double att;
    int speed;
    bool isAlive;
signals:
    void attOthers(Role* p);
    void beAttached();
};

#endif // ROLE_H
