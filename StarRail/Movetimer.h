#ifndef MOVETIMER_H
#define MOVETIMER_H

#include <QTimer>
#include "star.h"

class MoveTimer : public QTimer
{
    Q_OBJECT
public:
    MoveTimer();
    ~MoveTimer();
public slots:
    void beTriggeredStart();
    void beTriggeredStop();
};

#endif // MOVETIMER_H
