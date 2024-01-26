#ifndef PERSON_H
#define PERSON_H
#include <string>

class person
{
public:
    person(std::string name, int age);
    void printInfo();
    void ageUp();


private:
    int age;
    std::string name;
};
// Another part of the code
// person1 er adressen til person
void ageUp_printInfo(person* person1);

#endif // PERSON_H
