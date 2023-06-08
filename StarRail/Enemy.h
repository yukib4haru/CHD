#ifndef ENEMY_H
#define ENEMY_H
#include<Role.h>

class Enemy : public Role
{
    Q_OBJECT
public:
    Enemy(QString name1,int hp1,int att1,int speed1,int shield1,int label1,QString skillAiconPath1);
    //为了动态绑定，使其可以添加至场景中
    virtual void bindFunc()=0;
    virtual void skill()=0;
};

#endif // ENEMY_H
