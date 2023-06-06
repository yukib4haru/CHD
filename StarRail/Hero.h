#ifndef HERO_H
#define HERO_H

#include<star.h>
#include<Role.h>

class Hero : public Role
{
public:
    Hero(string name1,int hp1,int att1,int speed1,int label1);
    virtual void bindFunc()=0;
private:
    int shield;
    int label;
signals:
    //信号
    void useASignal(Role* p);
    void useBSignal(Role* p);
    void useCSignal(Role* p);
public slots:
    //技能
    virtual void skillA(Role* p)=0;
    virtual void skillB(Role* p)=0;
    virtual void skillC(Role* p)=0;
};

#endif // HERO_H
