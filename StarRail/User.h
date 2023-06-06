#ifndef USER_H
#define USER_H

#include <QWidget>

typedef struct
{
    QString name;
    QString password;
}UserInfo;

class User : public QWidget
{
    Q_OBJECT
public:
    explicit User(QWidget *parent = nullptr);

signals:

public slots:
    int judgeUsernameAndpassword(UserInfo user);
    int registerUser(UserInfo user);
};

#endif // USER_H
