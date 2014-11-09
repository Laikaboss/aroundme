/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(643, 657);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow \n"
"{\n"
"	 background: rgb(150, 150, 150);\n"
"}\n"
"\n"
"QWidget#verticalWidget:hover\n"
"{\n"
"	background-color:rgb(85,85,85);\n"
"\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalWidget = new QWidget(centralWidget);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(0, 0, 261, 721));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy1);
        verticalWidget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"	background-color:rgb(85,85,85);\n"
"\n"
"}\n"
"QWidget:hover\n"
"{\n"
"	background-color:rgb(85,85,85);\n"
"	padding-left:100px;\n"
"}\n"
"\n"
"QPushButton \n"
"{\n"
"     background: rgb(85, 85, 85); \n"
"	 border-style: outset;\n"
"     border-width: 1px;\n"
"     border-color:rgb(50, 50, 50);\n"
"	 color:rgb(240, 240, 240);\n"
"	 min-height:45%;\n"
"	width:10px;\n"
"	text-shadow: 2px 4px 3px rgba(0,0,0,0.3);\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"     background-color:  rgb(105, 105, 105);\n"
" }\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(verticalWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setMinimumSize(QSize(0, 47));
        pushButton_3->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamily(QStringLiteral("Domkrat"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        pushButton_3->setFont(font);

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("Domkrat"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setStyleStrategy(QFont::PreferAntialias);
        pushButton_2->setFont(font1);

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setBaseSize(QSize(0, 0));
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton, 0, Qt::AlignTop);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(300, 110, 311, 291));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(300, 410, 311, 71));
        MainWindow->setCentralWidget(centralWidget);
        verticalWidget->raise();
        pushButton_3->raise();
        textBrowser->raise();
        textEdit->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 643, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "text", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "text", 0));
        pushButton->setText(QApplication::translate("MainWindow", "text", 0));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
