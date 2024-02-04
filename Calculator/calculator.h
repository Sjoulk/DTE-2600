#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;

    // Types of functions that the buttons should correspond to
private slots:
    void NumPressed();          // Gets called when a button 0-9 is pressed
    void MathButtonPressed();   // Gets called when a mathematical operator button is pressed
    void EqualButtonPressed();  // Calculated and displays the result when the equal button is pressed
    void ClearDisplay();        // Clears the display when the AC button is pressed

};
#endif // CALCULATOR_H
