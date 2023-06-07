#ifndef TURNMANAGER_H
#define TURNMANAGER_H

#include"Manager.h"
#include"star.h"
#include"Hero.h"
#include"Enemy.h"

class TurnManager : public Manager
{
public:
    TurnManager(vector<Hero*> heroes1,vector<Enemy*> enemies1);
    //override可写可不写？
    void init() override;
    void update() override;
private:
    int currentTurn;

    vector<Hero*> heroes;
    vector<Enemy*> enemies;

    // 方法1:使用基类指针
    vector<Role*> roles;
    //迭代器用于遍历容器内元素
    vector<Role*>::iterator turnIterator;

    //当前进行动作的角色
    Role* curRole;
//    // 方法2:独立列表
//    std::vector<Hero*> heroes;
//    std::vector<Enemy*> enemies;

//    // 方法3:使用variant等
//    std::vector<(Hero*|Enemy*)> characters;
};

#endif // TURNMANAGER_H
