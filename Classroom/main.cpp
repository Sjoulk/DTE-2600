#include <iostream>
//#include "functiontest.h"
#include "temp_task.h"
#include "person.h"

using namespace std;

int main(){
    // int temp1, temp2, temp3;

    // std::cout << "Enter three temperatures: ";
    // std::cin >> temp1 >> temp2 >> temp3;

    // avgTemp(temp1, temp2, temp3);
    // minTemp(temp1, temp2, temp3);
    // maxTemp(temp1, temp2, temp3);

    // int maTemp = maxTemp(temp1, temp2, temp3);
    // std::cout << "Maximum Temperature: " << maTemp << std::endl;

    // int miTemp = minTemp(temp1, temp2, temp3);
    // std::cout << "Minimum Temperature: " << miTemp << std::endl;

    // int aTemp = avgTemp(temp1, temp2, temp3);
    // std::cout << "Average Temperature: " << aTemp << std::endl;

    // Making a person object with name & age
    person someone("Brian Brain", 30);

    someone.printInfo();

    someone.ageUp();

    someone.printInfo();

    return 0;
}
