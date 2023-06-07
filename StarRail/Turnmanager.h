#ifndef TURNMANAGER_H
#define TURNMANAGER_H

#include"Manager.h"
#include"star.h"
#include"Hero.h"
#include"Enemy.h"

class TurnManager : public Manager
{
public:

private:
    int currentTurn;

    std::vector<Hero*> heroes;
    std::vector<Enemy*> enemies;

//    // 方法1:使用基类指针
//    std::vector<Character*> characters;

//    // 方法2:独立列表
//    std::vector<Hero*> heroes;
//    std::vector<Enemy*> enemies;

//    // 方法3:使用variant等
//    std::vector<(Hero*|Enemy*)> characters;
};

#endif // TURNMANAGER_H
