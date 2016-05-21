/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *username;
    QLabel *label_4;
    QLineEdit *password_2;
    QPushButton *registerButton;
    QPushButton *ret_Button;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QStringLiteral("RegisterWindow"));
        RegisterWindow->resize(750, 399);
        RegisterWindow->setMinimumSize(QSize(750, 399));
        RegisterWindow->setMaximumSize(QSize(750, 399));
        centralwidget = new QWidget(RegisterWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 50, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        label_2->setFont(font);
        password = new QLineEdit(centralwidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(300, 170, 151, 21));
        password->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 130, 51, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(252, 175, 36, 12));
        username = new QLineEdit(centralwidget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(300, 130, 151, 21));
        username->setEchoMode(QLineEdit::Normal);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 210, 61, 16));
        password_2 = new QLineEdit(centralwidget);
        password_2->setObjectName(QStringLiteral("password_2"));
        password_2->setGeometry(QRect(300, 210, 151, 21));
        password_2->setEchoMode(QLineEdit::Password);
        registerButton = new QPushButton(centralwidget);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setGeometry(QRect(320, 280, 81, 31));
        ret_Button = new QPushButton(centralwidget);
        ret_Button->setObjectName(QStringLiteral("ret_Button"));
        ret_Button->setGeometry(QRect(660, 310, 41, 31));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(false);
        checkBox->setGeometry(QRect(470, 130, 16, 21));
        checkBox->setMouseTracking(true);
        checkBox->setAcceptDrops(false);
        checkBox->setCheckable(true);
        checkBox->setChecked(false);
        checkBox->setTristate(false);
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setEnabled(false);
        checkBox_2->setGeometry(QRect(470, 173, 16, 16));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setEnabled(false);
        checkBox_3->setGeometry(QRect(470, 210, 16, 21));
        RegisterWindow->setCentralWidget(centralwidget);
        username->raise();
        label_2->raise();
        password->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        password_2->raise();
        registerButton->raise();
        ret_Button->raise();
        checkBox->raise();
        checkBox_2->raise();
        checkBox_3->raise();
        menubar = new QMenuBar(RegisterWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 23));
        RegisterWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RegisterWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RegisterWindow->setStatusBar(statusbar);

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QApplication::translate("RegisterWindow", "MainWindow", 0));
        label_2->setText(QApplication::translate("RegisterWindow", "\347\224\250\346\210\267\346\263\250\345\206\214", 0));
        label->setText(QApplication::translate("RegisterWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("RegisterWindow", "\345\257\206\347\240\201\357\274\232", 0));
        username->setText(QString());
        label_4->setText(QApplication::translate("RegisterWindow", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0));
        registerButton->setText(QApplication::translate("RegisterWindow", "\346\263\250\345\206\214", 0));
        ret_Button->setText(QApplication::translate("RegisterWindow", "\350\277\224\345\233\236", 0));
        checkBox->setText(QString());
        checkBox_2->setText(QString());
        checkBox_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
