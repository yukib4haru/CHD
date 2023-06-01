#ifndef ROLE_H
#define ROLE_H
#include<star.h>
#include<Mainwindow.h>

class Role:public QGraphicsItem
{
public:
    Role();
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
};

#endif // ROLE_H
