#include <iostream>
#include "shapes.h"
#include "base.h"

using namespace std;

int main()
{
    cout << "Hello Shapes!" << endl;
    Circle circle(5, Circle::Color::Teal);
    circle * 2.5;
    return 0;
}
