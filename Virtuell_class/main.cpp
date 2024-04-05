#include <iostream>
#include "person.h"
#include "student.h"
#include <cmath>

using namespace std;

int main()
{
    // float debt = 10000.99f;
    // std::string name = "Kari";
    // student student1 = student(debt, name);


        float krav1 = (76 / 15);                // ceil rounds up to nearest integer.
        float krav2 = 3/2.0;                 // Calculates number of cleaners required in
        std::cout << "max: " << std::max(ceil(krav1), ceil(krav2)) << std::endl;                      // two ways. Returns the highest value of the two

        std::cout << ceil(double(krav2)) << endl;
        std::cout << ceil(double(krav1)) << endl;

        int intVar = ceil(krav2);
        int intHallo = ceil(static_cast<double>(krav2)/2);
        std::cout << "inthallo: " << intHallo << std::endl;
        std::cout << "intVar: " << intVar << std::endl;


    return 0;
}
