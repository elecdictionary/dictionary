/********************************************************************************
** Form generated from reading UI file 'changepasswordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDWINDOW_H
#define UI_CHANGEPASSWORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePasswordWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *formalpasswordEdit;
    QLineEdit *passwordEdit;
    QLineEdit *passwordEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *applyButton;
    QPushButton *returnButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChangePasswordWindow)
    {
        if (ChangePasswordWindow->objectName().isEmpty())
            ChangePasswordWindow->setObjectName(QStringLiteral("ChangePasswordWindow"));
        ChangePasswordWindow->resize(750, 399);
        ChangePasswordWindow->setMinimumSize(QSize(750, 399));
        ChangePasswordWindow->setMaximumSize(QSize(750, 399));
        centralwidget = new QWidget(ChangePasswordWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 20, 101, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(18);
        label->setFont(font);
        formalpasswordEdit = new QLineEdit(centralwidget);
        formalpasswordEdit->setObjectName(QStringLiteral("formalpasswordEdit"));
        formalpasswordEdit->setGeometry(QRect(310, 90, 161, 21));
        formalpasswordEdit->setEchoMode(QLineEdit::Password);
        passwordEdit = new QLineEdit(centralwidget);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(310, 150, 161, 21));
        passwordEdit->setEchoMode(QLineEdit::Password);
        passwordEdit_2 = new QLineEdit(centralwidget);
        passwordEdit_2->setObjectName(QStringLiteral("passwordEdit_2"));
        passwordEdit_2->setGeometry(QRect(310, 230, 161, 21));
        passwordEdit_2->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 90, 54, 12));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 160, 54, 12));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 230, 71, 21));
        applyButton = new QPushButton(centralwidget);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(340, 290, 71, 31));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(620, 300, 41, 31));
        ChangePasswordWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChangePasswordWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 23));
        ChangePasswordWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ChangePasswordWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ChangePasswordWindow->setStatusBar(statusbar);

        retranslateUi(ChangePasswordWindow);

        QMetaObject::connectSlotsByName(ChangePasswordWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChangePasswordWindow)
    {
        ChangePasswordWindow->setWindowTitle(QApplication::translate("ChangePasswordWindow", "MainWindow", 0));
        label->setText(QApplication::translate("ChangePasswordWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        label_2->setText(QApplication::translate("ChangePasswordWindow", "\345\216\237\346\234\211\345\257\206\347\240\201\357\274\232", 0));
        label_3->setText(QApplication::translate("ChangePasswordWindow", "\346\226\260\345\257\206\347\240\201\357\274\232", 0));
        label_4->setText(QApplication::translate("ChangePasswordWindow", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201\357\274\232", 0));
        applyButton->setText(QApplication::translate("ChangePasswordWindow", "\347\241\256\350\256\244\344\277\256\346\224\271", 0));
        returnButton->setText(QApplication::translate("ChangePasswordWindow", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordWindow: public Ui_ChangePasswordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDWINDOW_H
