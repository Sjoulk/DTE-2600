#include "shapes.h"
#include "math.h"
#include <cmath>


// Circle constructor
Circle::Circle(double radius, Color color) : radius(radius), BaseShape2D(color){}

double Circle::area() {
    return M_PI * std::pow(radius, 2);      // Area function for circles
}

double Circle::circumference() {            // Circumference function for circles
    return 2 * M_PI * radius;
}

void Circle::printCharacteristics() {       // Print function for circles
    std::cout << "Shape: Circle" << std::endl;
    BaseShape2D::printCharacteristics();    // Calls parent class print for color
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Circumference: " << circumference() << std::endl;
    std::cout << "Area: " << area() << std::endl;
}

void Circle::operator*(double rhs) {        // Scaling function for circles
    this->radius *= rhs;
    std::cout << "Scaling by factor: " << rhs << std::endl;
    std::cout << "New radius: " << radius << std::endl;
    std::cout << "New circumference: " << circumference() << std::endl;
    std::cout << "New area: " << area() << std::endl;

}

// Square constructor
Square::Square(double sideLength, Color color) : sideLength(sideLength), BaseShape2D(color){}

double Square::area() {                     // Area function for squares
    return sideLength * sideLength;
}

double Square::circumference() {            // Circumference function for squares
    return 4 * sideLength;
}

void Square::printCharacteristics() {       // Print function for squares
    std::cout << "Shape: Square" << std::endl;
    BaseShape2D::printCharacteristics();    // Calls parent class print for color
    std::cout << "Sidelength: " << sideLength << std::endl;
    std::cout << "Circumference: " << circumference() << std::endl;
    std::cout << "Area: " << area() << std::endl;
}

void Square::operator*(double rhs) {        // Scaling function for squares
    this->sideLength *= rhs;
    std::cout << "Scaling by factor: " << rhs << std::endl;
    std::cout << "New sidelength: " << sideLength << std::endl;
    std::cout << "New circumference: " << circumference() << std::endl;
    std::cout << "New area: " << area() << std::endl;

}

// Triangle constructor
Triangle::Triangle(double base, double height, Color color) : base(base), height(height), BaseShape2D(color) {}

double Triangle::area() {                   // Area function for triangles
    return (base * height) / 2;
}
double Triangle::hyp() {                    // Hypotenus function
    return sqrt(std::pow(base, 2) + std::pow(height, 2));
}

double Triangle::circumference() {          // Circumference function for triangles

    return (base + height + hyp());
}

void Triangle::printCharacteristics() {       // Print function for triangles
    std::cout << "Shape: Right angle triangle" << std::endl;
    BaseShape2D::printCharacteristics();    // Calls parent class print for color
    std::cout << "Baselength: " << base << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Hypotenus: " << hyp() << std::endl;
    std::cout << "Circumference: " << circumference() << std::endl;
    std::cout << "Area: " << area() << std::endl;
}

void Triangle::operator*(double rhs) {        // Scaling function for triangles
    this->base *= rhs;
    this->height *= rhs;
    std::cout << "Scaling by factor: " << rhs << std::endl;
    std::cout << "New baselength: " << base << std::endl;
    std::cout << "New height: " << height << std::endl;
    std::cout << "New hypotenus: " << hyp() << std::endl;
    std::cout << "New circumference: " << circumference() << std::endl;
    std::cout << "New area: " << area() << std::endl;

}
