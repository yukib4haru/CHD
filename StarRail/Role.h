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
    Role(string name1,int hp1,int att1,int speed1);
    ~Role();

    //动画
    void showRole();
    void death();
    //登场顺序
    void entryOrder(Role* p);

//    QGraphicsPixmapItem image;
private:
    string name;
    int hp;
    int att;
    int speed;
    bool isAlive;

//signals:
    void attOthers(Role* p);
    void beAttached();
};


#endif // ROLE_H
