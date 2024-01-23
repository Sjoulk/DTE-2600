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

// improved function using class
// tempen::tempen(float t1_input, float t2_input, float t3_input){
//     tempen::t1 = t1_input;
//     tempen::t2 = t2_input;
//     tempen::t3 = t3_input;
// }
