#include "Movetimer.h"

MoveTimer::MoveTimer()
{

}

MoveTimer::~MoveTimer()
{

}

void MoveTimer::beTriggeredStart()
{
    this->start(30);
    qDebug()<<"计时器启动";
}

void MoveTimer::beTriggeredStop()
{
    this->stop();
}
