#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"
#include <string>

class student : public person
{
public:
    student(float debt, std::string name);



private:
    float debt;
};

#endif // STUDENT_H
