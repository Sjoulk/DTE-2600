#include "MathOps.h"
#include <iostream>
#include <cmath>

// Addition function takes in a number of digits, 'n', in a vector, returns the sum.
double MathOps::add(const std::vector<double>& nums) {
    double sum = 0;                             // starts out with sum = 0
    for (double num : nums) {                   // for each element num in nums
        sum += num;                             // sum = the sum of all num in nums
    }
    return sum;
}

// Multiplication function that takes in a number of digits, 'n', in a vector, returns the product.
double MathOps::multiply(const std::vector<double>& nums) {
    double product = 1;                         // starts out with product = 1
    for (double num : nums) {                   // for each element num in nums
        product *= num;                         // product = the product of all num in nums
    }
    return product;
}

// Simple subtraction function
double MathOps::subtract(double a, double b) {
    return a - b;
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
