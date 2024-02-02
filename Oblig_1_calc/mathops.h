#ifndef MATHOPS_H
#define MATHOPS_H
#include <vector>

struct MathOps {
    static double add(const std::vector<double>& nums);
    static double subtract(double a, double b);
    static double multiply(const std::vector<double>& nums);
    static double divide(double a, double b);
    static double square(double a);
};

#endif // MATHOPS_H
