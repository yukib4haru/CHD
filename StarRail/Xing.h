#ifndef XING_H
#define XING_H

#include"Hero.h"

class Xing : public Hero
{
public:
    Xing();
<<<<<<< HEAD
    void skillA(double att,Role* p);
    void skillB(double att,Role* p);
    void skillC(double att,Role* p);
=======
    void skillA(Role* p);
    void skillB(Role* p);
    void skillC(Role* p);
>>>>>>> 467955446d0fa92a1d4dc5804647c6bee5277964
    virtual QRectF boundingRect() const { /* implement */ }
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget)
    { /* implement */ }
};

#endif // XING_H
