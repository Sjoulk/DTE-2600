#ifndef SHAPES_H
#define SHAPES_H
#include "base.h"

class Circle : public BaseShape2D {
public:
    Circle(double radius, Color color);
    double area() override;
    double circumference() override;
    void operator*(double rhs) override;

private:
    double radius;
};

class Square : public BaseShape2D {
public:
    Square(double sideLength, Color color);
    double area() override;
    double circumference() override;
    void operator*(double rhs) override;

private:
    double sideLength;
};

class Triangle : public BaseShape2D {
public:
    Triangle(double base, double height, Color color);
    double area() override;
    double circumference() override;
    void operator*(double rhs) override;

private:
    double base;
    double height;
};



#endif // SHAPES_H
