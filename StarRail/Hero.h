#ifndef HERO_H
#define HERO_H
#include<Role.h>

class Hero : public Role
{
public:
    Hero();
    //技能
    virtual void skillA(double att,Role* p)=0;
    virtual void skillB(double att,Role* p)=0;
    virtual void skillC(double att,Role* p)=0;
};

#endif // HERO_H
