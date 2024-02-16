#ifndef PERSON_H
#define PERSON_H
#include <string>

class person
{
public:
    person(std::string name);

    virtual std::string getName();

protected: // hvis denne er private kan ikke student()
            // hente ut navnet fra person
    std::string name;

// private:
//     std::string name;
};

#endif // PERSON_H
