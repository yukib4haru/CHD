#ifndef TURNMANAGER_H
#define TURNMANAGER_H

#include"Manager.h"
#include"star.h"
#include"Hero.h"
#include"Enemy.h"

class TurnManager : public Manager
{
public:
    TurnManager(vector<shared_ptr<Hero>> heroes1,vector<shared_ptr<Enemy>> enemies1,vector<shared_ptr<Role>>);
    //override可写可不写？
    void init() override;
    void update() override;
    //私有成员变量接口
    shared_ptr<Role> getCurRole(){return curRole;}
private:
    int currentTurn;

    vector<shared_ptr<Hero>> heroes;
    vector<shared_ptr<Enemy>> enemies;

    // 方法1:使用基类指针
    vector<shared_ptr<Role>> roles;
    //迭代器用于遍历容器内元素
    vector<shared_ptr<Role>>::iterator turnIterator;

    //当前进行动作的角色
    shared_ptr<Role> curRole;
//    // 方法2:独立列表
//    vector<Hero*> heroes;
//    vector<Enemy*> enemies;

    // 方法3:使用variant等
//    vector<(Hero*|Enemy*)> roles;

};

#endif // TURNMANAGER_H
