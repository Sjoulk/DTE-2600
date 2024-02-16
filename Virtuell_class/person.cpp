#include "person.h"
#include <iostream>
#include <string>

person::person(std::string name) {
    std::cout << "\nHello, I am a person." << std::endl;

    person::name = name;


}

std::string person::getName(){
    return person::name;
}
