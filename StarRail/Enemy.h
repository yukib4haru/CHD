#ifndef ENEMY_H
#define ENEMY_H
#include<Role.h>

class Enemy : public Role
{
public:
    Enemy();
    virtual void skill(int att)=0;
};

#endif // ENEMY_H
