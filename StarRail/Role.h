#ifndef ROLE_H
#define ROLE_H

#include<star.h>

class Role:public QGraphicsPixmapItem
{
public:
    Role(string name1,int hp1,int att1,int speed1);
    ~Role();

    //动画
    void showRole();
    void death();
    //登场顺序
    void entryOrder(Role* p);
private:
    string name;
    int hp;
    int att;
    int speed;
    bool isAlive;
signals:
    void attOthers(Role* p);
    void beAttached();
};


#endif // ROLE_H
