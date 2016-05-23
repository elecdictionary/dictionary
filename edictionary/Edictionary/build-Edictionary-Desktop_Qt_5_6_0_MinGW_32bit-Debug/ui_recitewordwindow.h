/********************************************************************************
** Form generated from reading UI file 'recitewordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECITEWORDWINDOW_H
#define UI_RECITEWORDWINDOW_H

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

class Ui_RecitewordWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QPushButton *restButton;
    QLineEdit *wordEdit;
    QPushButton *rememberButton;
    QPushButton *forgetButton;
    QPushButton *uploadButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RecitewordWindow)
    {
        if (RecitewordWindow->objectName().isEmpty())
            RecitewordWindow->setObjectName(QStringLiteral("RecitewordWindow"));
        RecitewordWindow->setEnabled(true);
        RecitewordWindow->resize(750, 399);
        RecitewordWindow->setMinimumSize(QSize(750, 399));
        RecitewordWindow->setMaximumSize(QSize(750, 399));
        centralwidget = new QWidget(RecitewordWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 20, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        label_2->setFont(font);
        restButton = new QPushButton(centralwidget);
        restButton->setObjectName(QStringLiteral("restButton"));
        restButton->setEnabled(true);
        restButton->setGeometry(QRect(600, 270, 75, 23));
        wordEdit = new QLineEdit(centralwidget);
        wordEdit->setObjectName(QStringLiteral("wordEdit"));
        wordEdit->setEnabled(false);
        wordEdit->setGeometry(QRect(210, 130, 321, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(22);
        wordEdit->setFont(font1);
        rememberButton = new QPushButton(centralwidget);
        rememberButton->setObjectName(QStringLiteral("rememberButton"));
        rememberButton->setGeometry(QRect(250, 270, 75, 23));
        forgetButton = new QPushButton(centralwidget);
        forgetButton->setObjectName(QStringLiteral("forgetButton"));
        forgetButton->setGeometry(QRect(420, 270, 75, 23));
        uploadButton = new QPushButton(centralwidget);
        uploadButton->setObjectName(QStringLiteral("uploadButton"));
        uploadButton->setEnabled(false);
        uploadButton->setGeometry(QRect(610, 40, 91, 41));
        RecitewordWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RecitewordWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 23));
        RecitewordWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RecitewordWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RecitewordWindow->setStatusBar(statusbar);

        retranslateUi(RecitewordWindow);

        QMetaObject::connectSlotsByName(RecitewordWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RecitewordWindow)
    {
        RecitewordWindow->setWindowTitle(QApplication::translate("RecitewordWindow", "MainWindow", 0));
        label_2->setText(QApplication::translate("RecitewordWindow", "\350\203\214\345\215\225\350\257\215", 0));
        restButton->setText(QApplication::translate("RecitewordWindow", "\344\274\221\346\201\257\344\270\200\344\270\213", 0));
        rememberButton->setText(QApplication::translate("RecitewordWindow", "\346\210\221\350\256\260\345\276\227", 0));
        forgetButton->setText(QApplication::translate("RecitewordWindow", "\346\210\221\345\277\230\344\272\206", 0));
        uploadButton->setText(QApplication::translate("RecitewordWindow", "\344\270\212\344\274\240\350\203\214\345\215\225\350\257\215\346\225\260\346\215\256", 0));
    } // retranslateUi

};

namespace Ui {
    class RecitewordWindow: public Ui_RecitewordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECITEWORDWINDOW_H
