#ifndef BASE_H
#define BASE_H
#include <iostream>

class BaseShape2D {
public:
    enum class Color{
        Crimson,
        Orange,
        Violet,
        Pink,
        Teal
    };
    BaseShape2D(Color color) : color(color) {}

    virtual ~BaseShape2D() = default;           // default destructor for proper deletion
    virtual double area() = 0;
    virtual void operator*(double rhs) = 0;
    virtual double circumference() = 0;



protected:
    Color color;
};

#endif // BASE_H
