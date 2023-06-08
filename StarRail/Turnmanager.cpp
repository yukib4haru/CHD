#include "Turnmanager.h"
#include"star.h"
#include"Hero.h"
#include"Enemy.h"
#include"Role.h"

TurnManager::TurnManager(vector<Hero*> heroes1,vector<Enemy*> enemies1,vector<Role*> roles1)
{
    heroes=heroes1;
    enemies=enemies1;
    roles=roles1;
}

void TurnManager::init()
{
    //先按速度大小进行排序
    sort(roles.begin(), roles.end(), [](Role* c1, Role* c2){
        return c1->getSpeed() > c2->getSpeed();
    });

    currentTurn = 1;
    turnIterator = roles.begin();   //指向第一个角色

    curRole = *turnIterator;   // 可选,初始化当前角色

    std::srand(std::time(nullptr));  // 初始化随机数种子

    //之前这一行代码有问题，访问了空容器
    //真正的问题是Role* Hero* 转化继承派生的问题……
    if (curRole != nullptr)
    {
        // 可以安全访问curRole
//        if (dynamic_cast<Hero*>(curRole) != nullptr)
//        {
//            qDebug()<<"当前角色是"<<dynamic_cast<Hero*>(curRole)->getMaxiumHealth()<<"\n";
//        }
//        else if (dynamic_cast<Enemy*>(curRole) != nullptr) {
//            qDebug() << dynamic_cast<Enemy*>(curRole)->getMaxiumHealth()<<"\n";
//        }
    }
}

void TurnManager::update()
{
    // 如果回合结束,开始新回合,重置turn列表,并且按照速度排序
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

    // 如果是我方角色,处理输入事件释放技能
    if (std::find(heroes.begin(), heroes.end(), curRole) != heroes.end()) {
        // 处理我方输入事件,释放技能等
    }

    // 执行当前角色的行动
//    curRole->act();

    // 迭代器指向下一个角色
    turnIterator++;

    //调试用
//    qDebug()<<"当前角色是"<<curRole->getName()<<"\n";
    qDebug()<<"现在是第"<<currentTurn<<"回合\n";
}
