#include "calculator.h"
#include "./ui_calculator.h"
#include <QRegularExpression>

    // Defining some variables to be used
double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
bool clrTrigger = false;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    // UI Initialization-------------------------------------------------------------

        // Display, puts the double calcVal in a string
    ui->Display->setText(QString::number(calcVal));

        // Array with reference to which button is pushed
    QPushButton *numButtons[10];

        // Assigning signals(button presses) and slots(functions)
        // Widgets are named "Button_i" in the UI editor.
        // Based on which button is pressed, the value, i, corresponding to the numeric value of the button
        // is connected to the slot of similar value.
    for(int i = 0; i < 10; ++i){
        QString butName = "Button_" +QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName); // Searching for a widget by providing its name
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed())); // Calls NumPressed whenever a numeric button is pressed
    }
        // Connecting math operator buttons to the MathButtonPressed() function
    connect(ui->Add, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

        // Connects the equal button to the EqualButtonPressed() function
    connect(ui->Equals, SIGNAL(released()), this,
            SLOT(EqualButtonPressed()));

        // Connects the clear button to the ClearDisplay() function
    connect(ui->Clear, SIGNAL(released()), this,
            SLOT(ClearDisplay()));

}

Calculator::~Calculator()
{
    delete ui;
}

// Displaying the numeric value of a button when it is pressed
void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();  // Sender returns a pointer -> to the button that was pressed
    QString butVal = button->text();                // Getting the number value of the pressed button, from the button text
    QString displayVal = ui->Display->text();       // Displaying the number of said button

    // Checking if display value is zero and displays zero if it is
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){
        ui->Display->setText(butVal);

    // If the value is not zero, the button value and display value is stored as a double
    } else{
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();

        // Setting max display digits to 16
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }

}
// Mathematical operator functions
void Calculator::MathButtonPressed(){
    // Tracking which math operator button was last pressed
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    // Storing the current value inside display
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();                // Converts the display value to a double
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();

    // Checking which arithmetic button was pressed by comparing signs
    // and sets boolean value to 'true' for a given trigger/button press

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
// perform an arithmetic operation when the 'equal' button is pressed, based on which
// boolean trigger is set to true.
void Calculator::EqualButtonPressed(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble(); // Converting display value to double in order to perform calculations
    if(addTrigger || subTrigger || multTrigger || divTrigger){ // performs math operation based on which arithmetic
        if(addTrigger){                                        // button was previously pressed and stores it as "solution"
            solution = calcVal + dblDisplayVal;                // adds the stored value to the display value
        } else if(subTrigger){
            solution = calcVal - dblDisplayVal;                // subtracts stored value from the display value
        } else if(multTrigger){
            solution = calcVal * dblDisplayVal;                // multiplies stored value with the display value
        } else //(divTrigger){
            solution = calcVal / dblDisplayVal;                // divides the stored value by the display value
        }

    ui->Display->setText(QString::number(solution));            // Displays the solution on the GUI display
}


// The clear button (AC): simply sets the value of the display = 0
void Calculator::ClearDisplay(){
    int zero = 0;
    ui->Display->setText(QString::number(zero));
}
