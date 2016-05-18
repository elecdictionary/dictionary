/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
{
public:
    QWidget *centralwidget;
    QPushButton *settingButton;
    QLabel *label;
    QPushButton *logoutButton;
    QPushButton *adjpasswordButton;
    QPushButton *reciteButton;
    QPushButton *textsearchButton;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName(QStringLiteral("MenuWindow"));
        MenuWindow->resize(750, 400);
        centralwidget = new QWidget(MenuWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        settingButton = new QPushButton(centralwidget);
        settingButton->setObjectName(QStringLiteral("settingButton"));
        settingButton->setGeometry(QRect(170, 140, 141, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        settingButton->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 30, 91, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(18);
        label->setFont(font1);
        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setGeometry(QRect(660, 300, 41, 31));
        adjpasswordButton = new QPushButton(centralwidget);
        adjpasswordButton->setObjectName(QStringLiteral("adjpasswordButton"));
        adjpasswordButton->setGeometry(QRect(170, 210, 141, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(11);
        adjpasswordButton->setFont(font2);
        reciteButton = new QPushButton(centralwidget);
        reciteButton->setObjectName(QStringLiteral("reciteButton"));
        reciteButton->setGeometry(QRect(420, 180, 141, 31));
        reciteButton->setFont(font2);
        textsearchButton = new QPushButton(centralwidget);
        textsearchButton->setObjectName(QStringLiteral("textsearchButton"));
        textsearchButton->setGeometry(QRect(420, 240, 141, 31));
        textsearchButton->setFont(font2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 130, 141, 31));
        pushButton->setFont(font2);
        MenuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 23));
        MenuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MenuWindow->setStatusBar(statusbar);

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MenuWindow)
    {
        MenuWindow->setWindowTitle(QApplication::translate("MenuWindow", "MainWindow", 0));
        settingButton->setText(QApplication::translate("MenuWindow", "\350\256\276\347\275\256", 0));
        label->setText(QApplication::translate("MenuWindow", "\344\270\273\350\217\234\345\215\225", 0));
        logoutButton->setText(QApplication::translate("MenuWindow", "\347\231\273\345\207\272", 0));
        adjpasswordButton->setText(QApplication::translate("MenuWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        reciteButton->setText(QApplication::translate("MenuWindow", "\350\203\214\345\215\225\350\257\215", 0));
        textsearchButton->setText(QApplication::translate("MenuWindow", "\346\226\207\346\234\254\347\224\237\350\257\215\346\243\200\347\264\242", 0));
        pushButton->setText(QApplication::translate("MenuWindow", "\346\237\245\345\215\225\350\257\215", 0));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
