#ifndef XING_H
#define XING_H

#include"Hero.h"

class Xing : public Hero
{
public:
    Xing();
    void skillA(Role* p);
    void skillB(Role* p);
    void skillC(Role* p);
//    - boundingRect():返回人物在场景中的 Bounding Rect(包围盒),用于确定人物的位置与大小。
//    - paint():实现人物的绘制,使用给定的绘图设备(QPainter)进行绘图。
    virtual QRectF boundingRect() const { /* implement */ }
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget)
    { /* implement */ }
};

#endif // XING_H
