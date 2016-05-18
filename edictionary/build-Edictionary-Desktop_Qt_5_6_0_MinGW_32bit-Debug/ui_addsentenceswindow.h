/********************************************************************************
** Form generated from reading UI file 'addsentenceswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSENTENCESWINDOW_H
#define UI_ADDSENTENCESWINDOW_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddsentencesWindow
{
public:
    QWidget *centralwidget;
    QPushButton *returnButton;
    QLineEdit *wordlineEdit;
    QTextEdit *csentenceEdit;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QPushButton *addsentencesButton;
    QTextEdit *esentenceEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddsentencesWindow)
    {
        if (AddsentencesWindow->objectName().isEmpty())
            AddsentencesWindow->setObjectName(QStringLiteral("AddsentencesWindow"));
        AddsentencesWindow->resize(750, 399);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddsentencesWindow->sizePolicy().hasHeightForWidth());
        AddsentencesWindow->setSizePolicy(sizePolicy);
        AddsentencesWindow->setMinimumSize(QSize(750, 399));
        AddsentencesWindow->setMaximumSize(QSize(750, 399));
        centralwidget = new QWidget(AddsentencesWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(670, 305, 41, 31));
        wordlineEdit = new QLineEdit(centralwidget);
        wordlineEdit->setObjectName(QStringLiteral("wordlineEdit"));
        wordlineEdit->setGeometry(QRect(320, 80, 141, 21));
        csentenceEdit = new QTextEdit(centralwidget);
        csentenceEdit->setObjectName(QStringLiteral("csentenceEdit"));
        csentenceEdit->setEnabled(true);
        csentenceEdit->setGeometry(QRect(180, 250, 381, 91));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 115, 54, 12));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 20, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 230, 54, 12));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 75, 81, 31));
        addsentencesButton = new QPushButton(centralwidget);
        addsentencesButton->setObjectName(QStringLiteral("addsentencesButton"));
        addsentencesButton->setGeometry(QRect(510, 70, 61, 31));
        esentenceEdit = new QTextEdit(centralwidget);
        esentenceEdit->setObjectName(QStringLiteral("esentenceEdit"));
        esentenceEdit->setEnabled(true);
        esentenceEdit->setGeometry(QRect(180, 135, 381, 81));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(11);
        esentenceEdit->setFont(font1);
        esentenceEdit->setReadOnly(false);
        AddsentencesWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddsentencesWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 23));
        AddsentencesWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AddsentencesWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AddsentencesWindow->setStatusBar(statusbar);

        retranslateUi(AddsentencesWindow);

        QMetaObject::connectSlotsByName(AddsentencesWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddsentencesWindow)
    {
        AddsentencesWindow->setWindowTitle(QApplication::translate("AddsentencesWindow", "MainWindow", 0));
        returnButton->setText(QApplication::translate("AddsentencesWindow", "\350\277\224\345\233\236", 0));
        label_4->setText(QApplication::translate("AddsentencesWindow", "\350\276\223\345\205\245\344\276\213\345\217\245\357\274\232", 0));
        label_2->setText(QApplication::translate("AddsentencesWindow", "\346\267\273\345\212\240\344\276\213\345\217\245", 0));
        label_3->setText(QApplication::translate("AddsentencesWindow", "\344\270\255\346\226\207\350\247\243\351\207\212\357\274\232", 0));
        label->setText(QApplication::translate("AddsentencesWindow", "\350\276\223\345\205\245\345\215\225\350\257\215\357\274\232", 0));
        addsentencesButton->setText(QApplication::translate("AddsentencesWindow", "\346\267\273\345\212\240\344\276\213\345\217\245", 0));
        esentenceEdit->setDocumentTitle(QString());
        esentenceEdit->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddsentencesWindow: public Ui_AddsentencesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSENTENCESWINDOW_H
