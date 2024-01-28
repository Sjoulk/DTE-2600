/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button_2;
    QPushButton *MemClear;
    QPushButton *Button_5;
    QPushButton *Button_4;
    QPushButton *Button_8;
    QPushButton *Button_6;
    QPushButton *Button_7;
    QPushButton *Button_9;
    QPushButton *Multiply;
    QLineEdit *Display;
    QPushButton *Divide;
    QPushButton *MemAdd;
    QPushButton *Button_1;
    QPushButton *Clear;
    QPushButton *Button_0;
    QPushButton *Button_3;
    QPushButton *Add;
    QPushButton *MemGet;
    QPushButton *ChangeSign;
    QPushButton *Subtract;
    QPushButton *Equals;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(452, 274);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName("Button_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button_2->sizePolicy().hasHeightForWidth());
        Button_2->setSizePolicy(sizePolicy);
        Button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #E400FF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_2, 3, 1, 1, 1);

        MemClear = new QPushButton(centralwidget);
        MemClear->setObjectName("MemClear");
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FF8C00;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemClear, 2, 4, 1, 1);

        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName("Button_5");
        sizePolicy.setHeightForWidth(Button_5->sizePolicy().hasHeightForWidth());
        Button_5->setSizePolicy(sizePolicy);
        Button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #E400FF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_5, 2, 1, 1, 1);

        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName("Button_4");
        sizePolicy.setHeightForWidth(Button_4->sizePolicy().hasHeightForWidth());
        Button_4->setSizePolicy(sizePolicy);
        Button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #E400FF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_4, 2, 0, 1, 1);

        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName("Button_8");
        sizePolicy.setHeightForWidth(Button_8->sizePolicy().hasHeightForWidth());
        Button_8->setSizePolicy(sizePolicy);
        Button_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #E400FF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_8, 1, 1, 1, 1);

        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName("Button_6");
        sizePolicy.setHeightForWidth(Button_6->sizePolicy().hasHeightForWidth());
        Button_6->setSizePolicy(sizePolicy);
        Button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #E400FF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_6, 2, 2, 1, 1);

        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName("Button_7");
        sizePolicy.setHeightForWidth(Button_7->sizePolicy().hasHeightForWidth());
        Button_7->setSizePolicy(sizePolicy);
        Button_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #E400FF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_7, 1, 0, 1, 1);

        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName("Button_9");
        sizePolicy.setHeightForWidth(Button_9->sizePolicy().hasHeightForWidth());
        Button_9->setSizePolicy(sizePolicy);
        Button_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #E400FF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_9, 1, 2, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FF8C00;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #00FFFF;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FF8C00;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName("MemAdd");
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FF8C00;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemAdd, 1, 4, 1, 1);

        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName("Button_1");
        sizePolicy.setHeightForWidth(Button_1->sizePolicy().hasHeightForWidth());
        Button_1->setSizePolicy(sizePolicy);
        Button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #E400FF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_1, 3, 0, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FF8C00;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName("Button_0");
        sizePolicy.setHeightForWidth(Button_0->sizePolicy().hasHeightForWidth());
        Button_0->setSizePolicy(sizePolicy);
        Button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #E400FF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_0, 4, 1, 1, 1);

        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName("Button_3");
        sizePolicy.setHeightForWidth(Button_3->sizePolicy().hasHeightForWidth());
        Button_3->setSizePolicy(sizePolicy);
        Button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #E400FF\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_3, 3, 2, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FF8C00;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName("MemGet");
        sizePolicy.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy);
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FF8C00;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemGet, 3, 4, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName("ChangeSign");
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FF8C00;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 4, 2, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName("Subtract");
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #252525;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FF8C00;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName("Equals");
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 4, 4, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 452, 21));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        MemClear->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        Button_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        MemAdd->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        Button_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        MemGet->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
