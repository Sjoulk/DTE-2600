#include "calculator.h"
#include "./ui_calculator.h"
#include <QRegularExpression>

double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    // UI Initialization-------------------------------------------------------------

        // Display, tar inn double i string
    ui->Display->setText(QString::number(calcVal));

        // Array with reference to buttons pushed
    QPushButton *numButtons[10];

        // Assign signal and slot
    for(int i = 0; i < 10; ++i){
        QString butName = "Button_" +QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName); // Search for widget by providing the name
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed())); // Calls NumPressed whenever a button is pressed
    }

    connect(ui->Add, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    connect(ui->Equals, SIGNAL(released()), this,
            SLOT(EqualButtonPressed()));

    connect(ui->ChangeSign, SIGNAL(released()), this,
            SLOT(ChangeNumberSign()));

}

Calculator::~Calculator()
{
    delete ui;
}

// Displaying the number when a button is pressed
void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();  // sender returns pointer to the button that was pressed
    QString butVal = button->text();                // Getting number value from the pressed button
    QString displayVal = ui->Display->text();       // Getting the value from button text to display

    // Checking if display value is zero
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){
        ui->Display->setText(butVal);
    } else{
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();

        // Setting max display digits to 16 before using exponents
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }

}
//
void Calculator::MathButtonPressed(){
    // Tracking which math button was last pressed
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    // Storing current value inside display
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();

    // Checking which button was clicked by comparison
    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    } else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        multTrigger = true;
    } else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    } else{ //(QString::compare(butVal, "-", Qt::CaseInsensitive) == 0){
        subTrigger = true;
    }
    ui->Display->setText("");
}

// Equal button
void Calculator::EqualButtonPressed(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble(); // Converting display value to double in order to perform calculations
    if(addTrigger || subTrigger || multTrigger || divTrigger){
        if(addTrigger){
            solution = calcVal + dblDisplayVal;
        } else if(subTrigger){
            solution = calcVal - dblDisplayVal;
        } else if(multTrigger){
            solution = calcVal * dblDisplayVal;
        } else //(divTrigger){
            solution = calcVal / dblDisplayVal;
        }

    ui->Display->setText(QString::number(solution));
}

void Calculator::ChangeNumberSign() {

    QString displayVal = ui->Display->text();
    QRegularExpression reg("[-]?[0-9.]*");
    QRegularExpressionMatch match = reg.match(displayVal);
    if(match.hasMatch()) {
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }

}
