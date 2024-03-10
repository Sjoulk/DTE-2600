#include <iostream>
#include "shapes.h"
#include "base.h"

using namespace std;

int main()                                                              // basic test of all functions
{
    cout << "Welcome to the shape demonstration!" << endl;
    cout << "Our first contender is: Circulars" << endl;
    cout << "------------------------------------" << endl;
    Circle circle(5, Circle::Color::Teal);
    circle.printCharacteristics();
    cout << "------------------------------------" << endl;
    circle * 2.5;

    cout << "------------------------------------" << endl;

    cout << "Our second contender is: Squareidar" << endl;
    Square square(4, Square::Color::Crimson);
    square.printCharacteristics();
    cout << "------------------------------------" << endl;
    square * 3.1;
    cout << "------------------------------------" << endl;

    cout << "Our third and final contender is: Triangleif" << endl;
    Triangle triangle(3, 4, Triangle::Color::Violet);
    triangle.printCharacteristics();
    cout << "------------------------------------" << endl;
    triangle * 2;
    cout << "------------------------------------" << endl;
    return 0;
}
