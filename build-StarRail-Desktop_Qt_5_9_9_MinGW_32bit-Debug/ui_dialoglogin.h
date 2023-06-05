/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QLabel *label;
    QWidget *widget;
    QLabel *editUser;
    QLineEdit *lineeditUser;
    QLabel *editPSWD;
    QLineEdit *lineeditPSWD;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QCheckBox *checkBoxSave;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QStringLiteral("DialogLogin"));
        DialogLogin->resize(685, 428);
        DialogLogin->setModal(false);
        label = new QLabel(DialogLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 10, 231, 421));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Image/Xing.png")));
        widget = new QWidget(DialogLogin);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 120, 391, 211));
        editUser = new QLabel(widget);
        editUser->setObjectName(QStringLiteral("editUser"));
        editUser->setGeometry(QRect(40, 30, 68, 21));
        lineeditUser = new QLineEdit(widget);
        lineeditUser->setObjectName(QStringLiteral("lineeditUser"));
        lineeditUser->setGeometry(QRect(110, 30, 113, 21));
        editPSWD = new QLabel(widget);
        editPSWD->setObjectName(QStringLiteral("editPSWD"));
        editPSWD->setGeometry(QRect(40, 80, 68, 15));
        lineeditPSWD = new QLineEdit(widget);
        lineeditPSWD->setObjectName(QStringLiteral("lineeditPSWD"));
        lineeditPSWD->setGeometry(QRect(110, 80, 113, 21));
        lineeditPSWD->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        btnOK = new QPushButton(widget);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setGeometry(QRect(50, 160, 93, 28));
        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(170, 160, 93, 28));
        checkBoxSave = new QCheckBox(widget);
        checkBoxSave->setObjectName(QStringLiteral("checkBoxSave"));
        checkBoxSave->setGeometry(QRect(240, 30, 101, 19));
        checkBoxSave->setTabletTracking(false);
        checkBoxSave->setChecked(false);

        retranslateUi(DialogLogin);
        QObject::connect(btnCancel, SIGNAL(clicked()), DialogLogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Dialog", Q_NULLPTR));
        label->setText(QString());
        editUser->setText(QApplication::translate("DialogLogin", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        lineeditUser->setPlaceholderText(QApplication::translate("DialogLogin", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        editPSWD->setText(QApplication::translate("DialogLogin", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        lineeditPSWD->setPlaceholderText(QApplication::translate("DialogLogin", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        btnOK->setText(QApplication::translate("DialogLogin", "\347\241\256\350\256\244", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("DialogLogin", "\345\217\226\346\266\210", Q_NULLPTR));
        checkBoxSave->setText(QApplication::translate("DialogLogin", "\344\277\235\345\255\230\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
