/********************************************************************************
** Form generated from reading UI file 'loginvedio0.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINVEDIO0_H
#define UI_LOGINVEDIO0_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginVedio0
{
public:
    QPushButton *btn0;

    void setupUi(QWidget *LoginVedio0)
    {
        if (LoginVedio0->objectName().isEmpty())
            LoginVedio0->setObjectName(QStringLiteral("LoginVedio0"));
        LoginVedio0->resize(1600, 950);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginVedio0->sizePolicy().hasHeightForWidth());
        LoginVedio0->setSizePolicy(sizePolicy);
        LoginVedio0->setMinimumSize(QSize(1600, 950));
        LoginVedio0->setMaximumSize(QSize(1600, 950));
        btn0 = new QPushButton(LoginVedio0);
        btn0->setObjectName(QStringLiteral("btn0"));
        btn0->setGeometry(QRect(0, 900, 1600, 50));
        btn0->setMinimumSize(QSize(1600, 50));
        btn0->setMaximumSize(QSize(1600, 50));

        retranslateUi(LoginVedio0);

        QMetaObject::connectSlotsByName(LoginVedio0);
    } // setupUi

    void retranslateUi(QWidget *LoginVedio0)
    {
        LoginVedio0->setWindowTitle(QApplication::translate("LoginVedio0", "Form", Q_NULLPTR));
        btn0->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginVedio0: public Ui_LoginVedio0 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVEDIO0_H
