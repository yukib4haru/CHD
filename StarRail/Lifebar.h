#ifndef LIFEBAR_H
#define LIFEBAR_H

#include "star.h"
class Lifebar : public QObject,public QGraphicsRectItem
{
public:
    Lifebar();
    ~Lifebar();
    int getWidth(){return width;}
    float getBarXSite(){return barXSite;}
    float getBarYSite(){return barYSite;}

    void setWidth(int w);
    void setBarXSite(float x);
    void setBarYSite(float y);
public slots:
    void lifebarchanged(int nowhp,int maximumhp);
private:
    int width;
    float barXSite;
    float barYSite;
};

#endif // LIFEBAR_H
