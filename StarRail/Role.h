#ifndef ROLE_H
#define ROLE_H

#include "star.h"
#include "Lifebar.h"

class Role:public QObject,public QGraphicsPixmapItem
{
    //QObject必须放在前面
    //QGraphicsPixmapItem不含信号和槽
    Q_OBJECT
public:
    Role(){ }
    Role(QString name1,int hp1,int att1,int speed1,int shield1);
    ~Role();
    Lifebar *lifebar;
    Lifebar *shieldbar;

    virtual void bindFunc()=0;

    //动画
    void showRole();
    void death();
    //登场顺序
    void entryOrder(Role* p);

    //私有变量接口
    int getAtt(){return att;}
    int getMaxiumHealth(){return maximumHealth;}
    int getNowHealth(){return hp;}
    int getSpeed(){return speed;}
    QString getName(){return name;}

    //私有变量运动属性
    float getXSite(){return xSite;}
    float getYSite(){return ySite;}
    float getXMove(){return xMove;}
    float getYMove(){return yMove;}

    //改变运动信息
    void setXSite(float xsite);
    void setYSite(float ysite);
    void setXMove(float xmove);
    void setYMove(float ymove);

    //返回类型信息以便强制类型转换
    virtual string getType() = 0;

private:
    QString name;
    int hp;
    int maximumHealth;
    int att;
    int speed;
    int shield;
    bool isAlive;

    //运动属性变量
    float xSite;
    float ySite;
    float xMove;
    float yMove;

signals:
    void lifebarShortenedSignal(int nowhp,int maximumhp);
public slots:
    //显示角色基本状态 用于调试
    void showBasicStatus();
    //收到伤害
    void beAttacked(int damage);
    //获得增益效果
    void beGivenShieldBuff(int effect);
    //收到治疗效果
    void beCured(int health);

};


#endif // ROLE_H
