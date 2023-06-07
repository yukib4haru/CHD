#ifndef HERO_H
#define HERO_H

#include<star.h>
#include<Role.h>

class Hero : public Role
{
    Q_OBJECT
public:
    Hero(){ }
    Hero(QString name1,int hp1,int att1,int speed1,int label1);
    virtual void bindFunc()=0;
private:
    int shield;
    int label;
signals:
    //技能释放信号
    void skillAsignal();
    void skillBsignal();
    void skillCsignal();
public slots:
    //信号广播槽函数 之前于主窗口的重复了 从而报错
//    void skillAbroadcast();
//    void skillBbroadcast();
//    void skillCbroadcast();
    //技能
    virtual void skillA()=0;
    virtual void skillB()=0;
    virtual void skillC()=0;
};

#endif // HERO_H
