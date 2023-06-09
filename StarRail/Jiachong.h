#ifndef JIACHONG_H
#define JIACHONG_H

#include"Enemy.h"
#include"star.h"

class Jiachong : public Enemy
{
    Q_OBJECT
public:
    Jiachong();
    virtual void bindFunc(){ }
    void skill(){}

    string getType(){return "Jiachong";};
public slots:
    void beMovedXing();
    void beMovedXier();
    void beMovedNatasha();
signals:
    void getValueXing(float moveDistanceX,float moveDistanceY,float x1,float y1,float x2,float y2);
    void getValueXier(float moveDistanceX,float moveDistanceY,float x1,float y1,float x2,float y2);
    void getValueNatasha(float moveDistanceX,float moveDistanceY,float x1,float y1,float x2,float y2);
};

#endif // JIACHONG_H
