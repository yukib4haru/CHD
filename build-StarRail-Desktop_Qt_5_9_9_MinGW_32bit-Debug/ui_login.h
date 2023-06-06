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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *widget;
    QLabel *label_user;
    QLineEdit *lineEdit_user;
    QLabel *label_pswd;
    QLineEdit *lineEdit_pswd;
    QPushButton *pushButton_login;
    QPushButton *pushButton_register;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(677, 510);
        widget = new QWidget(login);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(170, 120, 301, 241));
        label_user = new QLabel(widget);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(0, 0, 88, 47));
        QFont font;
        font.setPointSize(13);
        label_user->setFont(font);
        lineEdit_user = new QLineEdit(widget);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(130, 0, 141, 41));
        label_pswd = new QLabel(widget);
        label_pswd->setObjectName(QStringLiteral("label_pswd"));
        label_pswd->setGeometry(QRect(0, 50, 88, 99));
        label_pswd->setFont(font);
        label_pswd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_pswd = new QLineEdit(widget);
        lineEdit_pswd->setObjectName(QStringLiteral("lineEdit_pswd"));
        lineEdit_pswd->setGeometry(QRect(130, 80, 141, 41));
        lineEdit_pswd->setEchoMode(QLineEdit::Password);
        pushButton_login = new QPushButton(widget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(30, 170, 81, 41));
        pushButton_register = new QPushButton(widget);
        pushButton_register->setObjectName(QStringLiteral("pushButton_register"));
        pushButton_register->setGeometry(QRect(170, 170, 81, 41));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", Q_NULLPTR));
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
