#ifndef TURNMANAGER_H
#define TURNMANAGER_H

#include"star.h"
#include"Hero.h"
#include"Enemy.h"
#include"Xing.h"

class TurnManager
{
public:
    TurnManager(vector<Role*> heroes1,vector<Role*> enemies1,vector<Role*> roles1);
    //override可写可不写？
    void init();
    void update();
    //私有成员变量接口
    Role* getCurRole(){return curRole;}
    Role* curRole;

    vector<Role*> heroes;
    vector<Role*> enemies;

    // 方法1:使用基类指针
    vector<Role*> roles;
private:
    int currentTurn;

    //当前进行动作的角色
//    Role* curRole;

    //迭代器用于遍历容器内元素
    vector<Role*>::iterator turnIterator;

    //测试用
//    Xing* curXing;

//    // 方法2:独立列表
//    vector<Hero*> heroes;
//    vector<Enemy*> enemies;

    // 方法3:使用variant等
//    vector<(Hero*|Enemy*)> roles;


};

#endif // TURNMANAGER_H
