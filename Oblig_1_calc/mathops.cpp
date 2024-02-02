#include "MathOps.h"
#include <iostream>
#include <cmath>

// Addition function takes in a number of digits in a vector, returns the sum.
double MathOps::add(const std::vector<double>& nums) {
    double sum = 0;
    for (double num : nums) {
        sum += num;
    }
    return sum;
}

// Simple subtraction function
double MathOps::subtract(double a, double b) {
    return a - b;
}

// Multiplication function that takes in a number of digits in a vector, returns the product.
double MathOps::multiply(const std::vector<double>& nums) {
    double product = 1;
    for (double num : nums) {
        product *= num;
    }
    return product;
}

// Simple division function that returns 0 and an error message if division by zero is attempted.
double MathOps::divide(double a, double b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
    return a / b;
}

// Simple square root function
double MathOps::square(double a) {
    return sqrt(a);
}
