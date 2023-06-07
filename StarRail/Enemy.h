#ifndef ENEMY_H
#define ENEMY_H
#include<Role.h>

class Enemy : public Role
{
    Q_OBJECT
public:
    Enemy(string name1,int hp1,int att1,int speed1);
    //为了动态绑定，使其可以添加至场景中
    virtual void bindFunc()=0;
    virtual void skill(Role* p)=0;
};

#endif // ENEMY_H
