#ifndef SHAPES_H
#define SHAPES_H
#include "base.h"

class Circle : public BaseShape2D {
public:
    Circle(double radius, Color color);             // Abstract functions inherited from
    double area() override;                         // parent class, to be overwritten.
    double circumference() override;                // Including calculations of the
    void operator*(double rhs) override;            // shapes basic characteristics and
                                                    // a printout of the latter.
    void printCharacteristics() override;           // ~Same for every shape.


private:
    double radius;
};

class Square : public BaseShape2D {
public:
    Square(double sideLength, Color color);
    double area() override;
    double circumference() override;
    void operator*(double rhs) override;

    void printCharacteristics() override;

private:
    double sideLength;
};

class Triangle : public BaseShape2D {
public:
    Triangle(double base, double height, Color color);
    double area() override;
    double circumference() override;
    void operator*(double rhs) override;
    double hyp();
    void printCharacteristics() override;

private:
    double base;
    double height;
};



#endif // SHAPES_H
