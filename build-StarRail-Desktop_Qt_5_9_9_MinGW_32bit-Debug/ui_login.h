/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *login_gif;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_user;
    QLineEdit *lineEdit_user;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_pswd;
    QLineEdit *lineEdit_pswd;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_login;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_register;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->setEnabled(true);
        login->resize(335, 467);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        login->setLayoutDirection(Qt::LeftToRight);
        login->setStyleSheet(QStringLiteral("background-image: url(:/Image/background.jpg);"));
        widget = new QWidget(login);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 335, 467));
        widget->setMaximumSize(QSize(335, 467));
        widget->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        login_gif = new QLabel(widget);
        login_gif->setObjectName(QStringLiteral("login_gif"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(login_gif->sizePolicy().hasHeightForWidth());
        login_gif->setSizePolicy(sizePolicy1);
        login_gif->setPixmap(QPixmap(QString::fromUtf8(":/Image/login2.gif")));

        verticalLayout_3->addWidget(login_gif);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        label_user = new QLabel(widget);
        label_user->setObjectName(QStringLiteral("label_user"));
        sizePolicy1.setHeightForWidth(label_user->sizePolicy().hasHeightForWidth());
        label_user->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(13);
        label_user->setFont(font);

        horizontalLayout->addWidget(label_user);

        lineEdit_user = new QLineEdit(widget);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        sizePolicy1.setHeightForWidth(lineEdit_user->sizePolicy().hasHeightForWidth());
        lineEdit_user->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lineEdit_user);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_pswd = new QLabel(widget);
        label_pswd->setObjectName(QStringLiteral("label_pswd"));
        sizePolicy1.setHeightForWidth(label_pswd->sizePolicy().hasHeightForWidth());
        label_pswd->setSizePolicy(sizePolicy1);
        label_pswd->setFont(font);
        label_pswd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_pswd);

        lineEdit_pswd = new QLineEdit(widget);
        lineEdit_pswd->setObjectName(QStringLiteral("lineEdit_pswd"));
        sizePolicy1.setHeightForWidth(lineEdit_pswd->sizePolicy().hasHeightForWidth());
        lineEdit_pswd->setSizePolicy(sizePolicy1);
        lineEdit_pswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_pswd);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_login = new QPushButton(widget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        sizePolicy1.setHeightForWidth(pushButton_login->sizePolicy().hasHeightForWidth());
        pushButton_login->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(pushButton_login);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_register = new QPushButton(widget);
        pushButton_register->setObjectName(QStringLiteral("pushButton_register"));
        sizePolicy1.setHeightForWidth(pushButton_register->sizePolicy().hasHeightForWidth());
        pushButton_register->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(pushButton_register);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "\347\231\273\345\275\225", Q_NULLPTR));
        login_gif->setText(QString());
        label_user->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        lineEdit_user->setPlaceholderText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_pswd->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        lineEdit_pswd->setPlaceholderText(QApplication::translate("login", "\345\257\206\347\240\201", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("login", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_register->setText(QApplication::translate("login", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
