/********************************************************************************
** Form generated from reading UI file 'player.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_player
{
public:
    QLabel *label;
    QPushButton *pushButton1;
    QPushButton *pushButton2;

    void setupUi(QWidget *player)
    {
        if (player->objectName().isEmpty())
            player->setObjectName(QStringLiteral("player"));
        player->resize(1000, 600);
        label = new QLabel(player);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1000, 550));
        pushButton1 = new QPushButton(player);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setGeometry(QRect(0, 550, 70, 50));
        pushButton2 = new QPushButton(player);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setGeometry(QRect(930, 550, 70, 50));

        retranslateUi(player);

        QMetaObject::connectSlotsByName(player);
    } // setupUi

    void retranslateUi(QWidget *player)
    {
        player->setWindowTitle(QApplication::translate("player", "Form", Q_NULLPTR));
        label->setText(QString());
        pushButton1->setText(QApplication::translate("player", "openfile", Q_NULLPTR));
        pushButton2->setText(QApplication::translate("player", "play", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class player: public Ui_player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
