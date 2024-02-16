#include <iostream>
#include "person.h"
#include "student.h"

using namespace std;

int main()
{
    float debt = 10000.99f;
    std::string name = "Kari";
    student student1 = student(debt, name);

    return 0;
}
