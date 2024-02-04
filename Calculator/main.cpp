#include "calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator w;
    w.show();
    return a.exec();
}
// To Do List:

// 1. Multiple operations in sequence without pressing equal in between???
//      Vector inputs?? idk,
//      Auto equal button press if sequential presses??

// 2. Launcher for GUI + Terminal options???
// 3. More functionality:
//      sqrt
//      exponent
