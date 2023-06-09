/********************************************************************************
** Form generated from reading UI file 'loginvedio1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINVEDIO1_H
#define UI_LOGINVEDIO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginVedio1
{
public:
    QPushButton *btn1;

    void setupUi(QWidget *LoginVedio1)
    {
        if (LoginVedio1->objectName().isEmpty())
            LoginVedio1->setObjectName(QStringLiteral("LoginVedio1"));
        LoginVedio1->setEnabled(true);
        LoginVedio1->resize(1600, 950);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginVedio1->sizePolicy().hasHeightForWidth());
        LoginVedio1->setSizePolicy(sizePolicy);
        LoginVedio1->setMinimumSize(QSize(1600, 950));
        LoginVedio1->setMaximumSize(QSize(1600, 950));
        btn1 = new QPushButton(LoginVedio1);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setEnabled(true);
        btn1->setGeometry(QRect(0, 900, 1600, 50));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);
        btn1->setMinimumSize(QSize(1600, 50));
        btn1->setMaximumSize(QSize(1600, 50));

        retranslateUi(LoginVedio1);

        QMetaObject::connectSlotsByName(LoginVedio1);
    } // setupUi

    void retranslateUi(QWidget *LoginVedio1)
    {
        LoginVedio1->setWindowTitle(QApplication::translate("LoginVedio1", "Form", Q_NULLPTR));
        btn1->setText(QApplication::translate("LoginVedio1", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginVedio1: public Ui_LoginVedio1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVEDIO1_H
