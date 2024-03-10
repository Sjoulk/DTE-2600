#ifndef BASE_H
#define BASE_H
#include <iostream>

class BaseShape2D {
public:
    enum class Color{                           // <--- enum class for farge, check!
        Crimson,
        Orange,
        Violet,
        Pink,
        Teal
    };
    BaseShape2D(Color color) : color(color) {}  // Defines constructor that takes the argument: color

    virtual ~BaseShape2D() = default;           // default destructor for proper deletion
    virtual double area() = 0;
    virtual void operator*(double rhs) = 0;
    virtual double circumference() = 0;         // <--- Pure virtual omkrets funksjon, check!
    virtual void printCharacteristics() {       // partial print function: color only
        std::cout << "Color: " << getColorName(color) << std::endl;
    }



protected:
    Color color;

    std::string getColorName(Color color) const {   // Function to retrieve color name
        switch (color) {
        case Color::Crimson: return "Crimson";
        case Color::Orange: return "Orange";
        case Color::Violet: return "Violet";
        case Color::Pink: return "Pink";
        case Color::Teal: return "Teal";
        default: return "Unknown";
        }
    }
};

#endif // BASE_H
