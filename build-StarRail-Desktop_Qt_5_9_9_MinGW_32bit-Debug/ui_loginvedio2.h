/********************************************************************************
** Form generated from reading UI file 'loginvedio2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINVEDIO2_H
#define UI_LOGINVEDIO2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginVedio2
{
public:
    QPushButton *btn2;

    void setupUi(QWidget *LoginVedio2)
    {
        if (LoginVedio2->objectName().isEmpty())
            LoginVedio2->setObjectName(QStringLiteral("LoginVedio2"));
        LoginVedio2->resize(1600, 950);
        LoginVedio2->setMinimumSize(QSize(1600, 950));
        LoginVedio2->setMaximumSize(QSize(1600, 950));
        btn2 = new QPushButton(LoginVedio2);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(0, 900, 1600, 50));
        btn2->setMinimumSize(QSize(1600, 50));
        btn2->setMaximumSize(QSize(1600, 50));

        retranslateUi(LoginVedio2);

        QMetaObject::connectSlotsByName(LoginVedio2);
    } // setupUi

    void retranslateUi(QWidget *LoginVedio2)
    {
        LoginVedio2->setWindowTitle(QApplication::translate("LoginVedio2", "Form", Q_NULLPTR));
        btn2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginVedio2: public Ui_LoginVedio2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVEDIO2_H
