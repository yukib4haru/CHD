#include "Turnmanager.h"
#include"star.h"
#include"Hero.h"
#include"Enemy.h"
#include"Role.h"
#include"Movetimer.h"
#include"xier.h"

void TurnManager::initEnemyMoveTimer()
{
    enemyMoveTimer = new MoveTimer;
    enemyMoveTimer->setInterval(500);
}

TurnManager::TurnManager(vector<Role*> heroes1,vector<Role*> enemies1,vector<Role*> roles1)
{
    heroes=heroes1;
    enemies=enemies1;
    roles=roles1;
    initEnemyMoveTimer();
}

void TurnManager::init()
{
    //先按速度大小进行排序
    sort(roles.begin(), roles.end(), [](Role* c1, Role* c2){
        return c1->getSpeed() > c2->getSpeed();
    });

    currentTurn = 1;
    turnIterator = roles.begin();   //指向第一个角色

    curRole =  *turnIterator;   // 可选,初始化当前角色

    std::srand(std::time(nullptr));  // 初始化随机数种子

    //之前这一行代码有问题，访问了空容器
    //真正的问题是Role* Hero* 转化继承派生的问题……

}

void TurnManager::update()
{
    // 执行当前角色的行动
    //    curRole->act();

    // 迭代器指向下一个角色
    turnIterator++;

    if (turnIterator == roles.end()) {
        currentTurn++;
        //实现从大到小排序，使用lamda函数？
        sort(roles.begin(), roles.end(), [](Role* c1, Role* c2){
            return c1->getSpeed() > c2->getSpeed();
        });
        turnIterator = roles.begin();
    }

    // 获取当前角色
    curRole = *turnIterator;

    // 如果是敌方角色,处理输入事件释放技能
    if (std::find(enemies.begin(), enemies.end(), curRole) != enemies.end())
    {
        // 处理敌方技能等
        qDebug()<<"敌方攻击\n";
        int cur = rand()%heroes.size();
        heroes[cur]->beAttacked(curRole->getAtt());
        curRole->setPos(950,200);
        enemyMoveTimer->start();
        connect(enemyMoveTimer,&MoveTimer::timeout,[=](){
            enemyMoveTimer->stop();
            enemies[0]->setPos(1000,200);
        });
        turnIterator++;
        curRole = *turnIterator;
    }

    //调试用
    qDebug()<<"现在是第"<<currentTurn<<"回合\n";
}

//void TurnManager::update()
//{
//    // 如果是敌方角色,处理输入事件释放技能
//    // 处理敌方技能等
//    if (std::find(enemies.begin(), enemies.end(), curRole) != enemies.end())
//    {
//        int cur = rand()%3;
//        //实现甲虫移动
//        emit curRole->enemyAttact(heroes[cur]);
//        connect(curRole,&Role::enemyAttact,heroes[cur],&Role::beMovedEnemy);
//        connect(enemyMoveTimer,&MoveTimer::timeout,curRole,&Role::enemyMoveTo);
//        connect(heroes[cur],&Role::getValueEnemy,enemyMoveTimer,&MoveTimer::beTriggeredStart);
//        connect(curRole,&Role::enemyMoveOver,enemyMoveTimer,&MoveTimer::beTriggeredStop);
//        connect(heroes[cur],&Role::getValueEnemy,curRole,&Role::enemySetDistance);
//        connect(curRole,&Role::enemyMoveOver,curRole,&Role::enemyAttactValue);
//        connect(curRole,&Role::getDamage,heroes[cur],&Role::beAttacked);
//    }

//    // 执行当前角色的行动
//        curRole->act();

//    // 迭代器指向下一个角色
//    turnIterator++;

//    if (turnIterator == roles.end()) {
//        currentTurn++;
//        //实现从大到小排序，使用lamda函数？
//        sort(roles.begin(), roles.end(), [](Role* c1, Role* c2){
//            return c1->getSpeed() > c2->getSpeed();
//        });
//        turnIterator = roles.begin();
//    }

//    // 获取当前角色
//    curRole = *turnIterator;

//    //调试用
//    qDebug()<<"现在是第"<<currentTurn<<"回合\n";
//}

void TurnManager::sbDie(Role* p)
{
//    for (auto it = roles.begin(); it != roles.end(); ++it)
//    {
//        if (*it == p)
//        {
//            heroes.erase(it);
//            roles.erase(it);
//            roles.erase(it);
//            break;   // 删除后跳出循环
//        }
//    }
}
