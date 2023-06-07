#ifndef ROLE_H
#define ROLE_H

#include<star.h>

class Role:public QObject,public QGraphicsPixmapItem
{
    //QObject必须放在前面
    //QGraphicsPixmapItem不含信号和槽
    Q_OBJECT
public:
    Role(){ }
    Role(QString name1,int hp1,int att1,int speed1,int shield1);
    ~Role();

    //动画
    void showRole();
    void death();

    //登场顺序
    void entryOrder(Role* p);

    //私有变量接口
    int getAtt(){return att;}
private:
    QString name;
    int hp;
    int att;
    int speed;
    int shield;
    bool isAlive;

signals:

public slots:
    //显示角色基本状态 用于调试
    void showBasicStatus();
    //收到伤害
    void beAttached(int damage);
    //获得增益效果
    void beGivenShieldBuff(int effect);
};


#endif // ROLE_H
