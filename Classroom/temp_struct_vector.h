#ifndef TEMP_STRUCT_VECTOR_H
#define TEMP_STRUCT_VECTOR_H
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

struct TemperatureStats{

    std::vector<float> temperatures;

    float calculateAverage() const;
    float findMinimum() const;
    float findMaximum() const;
};

#endif // TEMP_STRUCT_VECTOR_H
