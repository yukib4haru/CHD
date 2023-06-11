#ifndef NATASHA_H
#define NATASHA_H

#include "Hero.h"

class Natasha : public Hero
{
    Q_OBJECT
public:
    Natasha();
    ~Natasha();
    //为了动态绑定，使其可以添加至场景中
    virtual void bindFunc(){ }

    string getType(){return "Natasha";};

public slots:
    //    - boundingRect():返回人物在场景中的 Bounding Rect(包围盒),用于确定人物的位置与大小。
    //    - paint():实现人物的绘制,使用给定的绘图设备(QPainter)进行绘图。

    //    virtual QRectF boundingRect() const { /* implement */ }
    //    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget)
    //    { /* implement */ }
    //技能槽函数
    void skillA();
    void skillB();
    void skillC();
signals:
    void skillAdamage(int att);
    void skillBcure(int att);
};

#endif // NATASHA_H
