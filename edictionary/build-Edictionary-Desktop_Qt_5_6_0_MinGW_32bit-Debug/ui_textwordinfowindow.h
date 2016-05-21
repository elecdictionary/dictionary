/********************************************************************************
** Form generated from reading UI file 'textwordinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTWORDINFOWINDOW_H
#define UI_TEXTWORDINFOWINDOW_H

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

class Ui_TextWordinfoWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *sentencesEdit;
    QLineEdit *wordlineEdit;
    QPushButton *returnButton;
    QPushButton *addsentencesButton;
    QTextEdit *wordinfoEdit;
    QLabel *label;
    QPushButton *nextButton;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TextWordinfoWindow)
    {
        if (TextWordinfoWindow->objectName().isEmpty())
            TextWordinfoWindow->setObjectName(QStringLiteral("TextWordinfoWindow"));
        TextWordinfoWindow->resize(750, 399);
        TextWordinfoWindow->setMinimumSize(QSize(750, 399));
        TextWordinfoWindow->setMaximumSize(QSize(750, 399));
        centralwidget = new QWidget(TextWordinfoWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 20, 131, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 170, 54, 12));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 110, 54, 12));
        sentencesEdit = new QTextEdit(centralwidget);
        sentencesEdit->setObjectName(QStringLiteral("sentencesEdit"));
        sentencesEdit->setEnabled(false);
        sentencesEdit->setGeometry(QRect(170, 190, 391, 131));
        wordlineEdit = new QLineEdit(centralwidget);
        wordlineEdit->setObjectName(QStringLiteral("wordlineEdit"));
        wordlineEdit->setEnabled(false);
        wordlineEdit->setGeometry(QRect(250, 80, 141, 21));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(660, 320, 51, 31));
        addsentencesButton = new QPushButton(centralwidget);
        addsentencesButton->setObjectName(QStringLiteral("addsentencesButton"));
        addsentencesButton->setGeometry(QRect(660, 200, 61, 31));
        wordinfoEdit = new QTextEdit(centralwidget);
        wordinfoEdit->setObjectName(QStringLiteral("wordinfoEdit"));
        wordinfoEdit->setEnabled(false);
        wordinfoEdit->setGeometry(QRect(170, 130, 391, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(11);
        wordinfoEdit->setFont(font1);
        wordinfoEdit->setReadOnly(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 70, 81, 31));
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(660, 280, 51, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 242, 51, 31));
        TextWordinfoWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TextWordinfoWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 23));
        TextWordinfoWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TextWordinfoWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TextWordinfoWindow->setStatusBar(statusbar);

        retranslateUi(TextWordinfoWindow);

        QMetaObject::connectSlotsByName(TextWordinfoWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TextWordinfoWindow)
    {
        TextWordinfoWindow->setWindowTitle(QApplication::translate("TextWordinfoWindow", "MainWindow", 0));
        label_2->setText(QApplication::translate("TextWordinfoWindow", "\346\226\207\346\234\254\347\224\237\350\257\215\344\277\241\346\201\257", 0));
        label_3->setText(QApplication::translate("TextWordinfoWindow", "\344\276\213\345\217\245\357\274\232", 0));
        label_4->setText(QApplication::translate("TextWordinfoWindow", "\345\215\225\350\257\215\344\277\241\346\201\257\357\274\232", 0));
        returnButton->setText(QApplication::translate("TextWordinfoWindow", "\350\277\224\345\233\236", 0));
        addsentencesButton->setText(QApplication::translate("TextWordinfoWindow", "\346\267\273\345\212\240\344\276\213\345\217\245", 0));
        wordinfoEdit->setDocumentTitle(QString());
        wordinfoEdit->setPlaceholderText(QString());
        label->setText(QApplication::translate("TextWordinfoWindow", "\345\215\225\350\257\215\357\274\232", 0));
        nextButton->setText(QApplication::translate("TextWordinfoWindow", "\344\270\213\344\270\200\344\270\252", 0));
        pushButton->setText(QApplication::translate("TextWordinfoWindow", "\344\270\212\344\270\200\344\270\252", 0));
    } // retranslateUi

};

namespace Ui {
    class TextWordinfoWindow: public Ui_TextWordinfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTWORDINFOWINDOW_H
