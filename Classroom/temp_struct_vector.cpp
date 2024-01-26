#include "temp_struct_vector.h"

float TemperatureStats::calculateAverage() const {
    if (temperatures.empty()) return 0.0f;
    float sum = std::accumulate(temperatures.begin(), temperatures.end(), 0.0f);
    return sum / temperatures.size();
}

float TemperatureStats::findMinimum() const {
    if (temperatures.empty()) return 0.0f;
    return *std::min_element(temperatures.begin(), temperatures.end());
}

float TemperatureStats::findMaximum() const {
    if (temperatures.empty()) return 0.0f;
    return *std::max_element(temperatures.begin(), temperatures.end());
}
void printTemperatures(const std::vector<float>& temperatures) {
    for (size_t i = 0; i < temperatures.size(); ++i) {
        std::cout << temperatures[i] << " °C" << std::endl;
    }
}
