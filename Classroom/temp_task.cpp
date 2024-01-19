#include "temp_task.h"
#include <iostream>
#include <algorithm>

// Function implementation

int avgTemp(int temp1, int temp2, int temp3){

    int average = (temp1 + temp2 + temp3) / 3;
    std::cout << "Average Temperature: " << average << std::endl;

    return average;
}

int maxTemp(int temp1, int temp2, int temp3){
    return std::max({temp1, temp2, temp3});
}

int minTemp(int temp1, int temp2, int temp3){
    return std::min({temp1, temp2, temp3});
}
