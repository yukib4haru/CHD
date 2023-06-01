#ifndef XING_H
#define XING_H

#include"Hero.h"

class Xing : public Hero
{
public:
    Xing();
    void skillA(double att,Role* p);
    void skillB(double att,Role* p);
    void skillC(double att,Role* p);
    virtual QRectF boundingRect() const { /* implement */ }
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget)
    { /* implement */ }
};

#endif // XING_H
