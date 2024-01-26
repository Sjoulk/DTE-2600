#include <iostream>
//#include "functiontest.h"
#include "temp_task.h"
#include "person.h"
#include <iostream>
#include <vector>
#include <map>
#include "temp_struct_vector.h"

using namespace std;

int main(){
    std::vector<double> values = {128, 21.9, 53, 238.7, 33.4};
    double first_val = values.at(0);
    int values_size = values.size();

    std::cout << first_val << std::endl;

    for (int i = 0 ; i < values_size ; i++){
        std::cout << values.at(i) << ' ';
    }

    // for (double i: values)
    //     std::cout << i << ' ';
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
// bruker mindre minne, peker til person1
    person* person1 = new person("Per", 76);
    ageUp_printInfo(person1);


// Existing Temperature vector
    TemperatureStats stats = {{23.4f, 21.6f, 22.8f, 19.5f, 80.9f}};

// Adding new temperature readings
    stats.temperatures.push_back(26.7f);

// Adding multiple new temperature readings
    std::vector<float> moreTemps = {23.0f, 10.0f, 68.1f};
    stats.temperatures.insert(stats.temperatures.end(), moreTemps.begin(), moreTemps.end());

    // Calculate and print the average temperature
    std::cout << "Average Temperature: " << stats.calculateAverage() << "C" << std::endl;

    // Find and print the minimum temperature
    std::cout << "Minimum Temperature: " << stats.findMinimum() << "C" << std::endl;

    // Find and print the maximum temperature
    std::cout << "Maximum Temperature: " << stats.findMaximum() << "C" << std::endl;

    // klarte ikke å printe ut liste av vector verdier
    // printTemperatures(TemperatureStats.stats);

    return 0;
}
// Array: er en fixed-size container.
// Vector: er en dynamic-size container
// og vil endre størrelse basert når vi
// legger til eller fjerner verdier
// Map: er automatisk sortert ved input
// Nøkkelord assosiert med verdier gjør at
// Maps er lett søkbar.
