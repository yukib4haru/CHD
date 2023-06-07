#include "Turnmanager.h"
#include"star.h"
#include<Hero.h>
#include<Enemy.h>
#include<Role.h>

TurnManager::TurnManager(vector<Hero*> heroes1,vector<Enemy*> enemies1)
{
    heroes=heroes1;
    enemies=enemies1;
    roles.insert(roles.end(),heroes1.begin(),heroes1.end());
    roles.insert(roles.end(),enemies1.begin(),enemies1.end());

}

void TurnManager::init()
{
    currentTurn = 1;
    turnIterator = roles.begin();   //指向第一个角色

    curRole = *turnIterator;   // 可选,初始化当前角色

    std::srand(std::time(nullptr));  // 初始化随机数种子
}

void TurnManager::update()
{
    // 如果回合结束,开始新回合,重置turn列表,并且按照速度排序
    if (turnIterator == roles.end()) {
        currentTurn++;
        //实现从大到小排序，使用lamda函数？
        std::sort(roles.begin(), roles.end(), [](Role* c1, Role* c2){
            return c1->getSpeed() > c2->getSpeed();
        });
        turnIterator = roles.begin();
    }

    // 获取当前角色
    curRole = *turnIterator;

    // 如果是我方角色,处理输入事件释放技能
    if (std::find(heroes.begin(), heroes.end(), curRole) != heroes.end()) {
        // 处理我方输入事件,释放技能等
    }

    // 执行当前角色的行动
//    curRole->act();

    // 迭代器指向下一个角色
    turnIterator++;
}
