#include "shapes.h"
#include "math.h"
#include <cmath>


// Circle constructor
Circle::Circle(double radius, Color color) : radius(radius), BaseShape2D(color){}

double Circle::area() {
    return M_PI * std::pow(radius, 2);      // Area function
}

double Circle::circumference() {            // Circumference function
    return 2 * M_PI * radius;
}

void Circle::operator*(double rhs) {        // Scaling function
    this->radius *= rhs;
    std::cout << "Scaling by factor: " << rhs << std::endl;
    std::cout << "New radius: " << radius << std::endl;
    std::cout << "New area: " << area() << std::endl;
    std::cout << "New circumference: " << circumference() << std::endl;

}
