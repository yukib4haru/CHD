#ifndef ENEMY_H
#define ENEMY_H
#include<Role.h>

class Enemy : public Role
{
public:
    Enemy(string name1,int hp1,int att1,int speed1);
    virtual void skill(Role* p)=0;
};

#endif // ENEMY_H
