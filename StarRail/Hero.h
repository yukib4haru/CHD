#ifndef HERO_H
#define HERO_H

#include<star.h>
#include<Role.h>

class Hero : public Role
{
    Q_OBJECT
public:
    Hero(){ }
    Hero(QString name1,int hp1,int att1,int speed1,int shield1,int label1,QString skillAiconPath1);

private:
//    int label;
signals:
    //技能释放信号
    void skillAsignal();
    void skillBsignal();
    void skillCsignal();
public slots:
    //技能槽函数
    virtual void skillA()=0;
    virtual void skillB()=0;
    virtual void skillC()=0;
};

#endif // HERO_H
