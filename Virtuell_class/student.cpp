#include "student.h"
#include "person.h"
#include <iostream>

student::student(float debt, std::string name) : person(name){
    std::cout << "I am also a student." << std::endl;

    student::debt = debt; // gjeld settes hos student
                            // får navn fra person
    std::cout << getName() << std::endl;
}
