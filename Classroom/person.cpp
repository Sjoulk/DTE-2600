#include "person.h"
#include <iostream>

// Implementing the constructor
person::person(std::string name_input, int age_input){
    person::name = name_input;
    person::age = age_input;

}
// Output name&age to console
void person::printInfo(){
    std::cout << "\nName: " << name << ", Age: " << age << std::endl;

}
// string.data() -> character array

// Increases age with 1 year
void person::ageUp(){
    age++;
    // person::age = person::age + 1;
    // person::age += 1;

}
