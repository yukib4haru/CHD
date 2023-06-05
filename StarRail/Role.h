#ifndef ROLE_H
#define ROLE_H

<<<<<<< HEAD
=======
#include<star.h>

>>>>>>> 467955446d0fa92a1d4dc5804647c6bee5277964
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
