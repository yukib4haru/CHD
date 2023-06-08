#include "Turnmanager.h"
#include"star.h"
#include"Hero.h"
#include"Enemy.h"
#include"Role.h"

#include"xier.h"

TurnManager::TurnManager(vector<Hero*> heroes1,vector<Enemy*> enemies1,vector<Role*> roles1)
{
    heroes=heroes1;
    enemies=enemies1;
    roles=roles1;
}

void TurnManager::init()
{
    //先按速度大小进行排序
//    sort(roles.begin(), roles.end(), [](Role* c1, Role* c2){
//        return c1->getSpeed() > c2->getSpeed();
//    });

    curRole = (Xier*) roles[1];

    qDebug()<<curRole->getAtt()<<"\n";

    currentTurn = 1;
    turnIterator = roles.begin();   //指向第一个角色

//    curRole = (Xier*) *turnIterator;   // 可选,初始化当前角色

    //heroTest
    testIterator = heroes.begin();
//    curHero = *testIterator;

    std::srand(std::time(nullptr));  // 初始化随机数种子

    //之前这一行代码有问题，访问了空容器
    //真正的问题是Role* Hero* 转化继承派生的问题……

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
    if (std::find(heroes.begin(), heroes.end(), curRole) != heroes.end())
    {
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
