#include "fileops.h"
#include <fstream>
#include <iostream>

// readData function
//
std::map<std::string, std::vector<std::pair<int, int>>> readData(const std::string& inFile) {

    // Map with strings(z) linked vectors of integer pairs(x, y)
    // or: Buildings(z) are linked to their rooms of dimension(x, y)
    std::map<std::string, std::vector<std::pair<int, int>>> dataMap;
    std::ifstream file(inFile);

    // Error message if file cannot be opened
    if (!file.is_open()) {
        std::cerr << "Failed to open the file: " << inFile << std::endl;
        return dataMap;
    }

    int x, y;
    std::string z;

    // Makes a vector pair of integers for each line and pushes it to the back of the map
    // Appends the (x, y) pair to the vector corresponding to the building (z)
    while (file >> x >> y >> z) {
        dataMap[z].push_back(std::make_pair(x, y));
    }

    return dataMap;
}

// Write data function
// Iterates over the map dataMap, and writes each vector to a corresponding file for each building
// Const to make sure the write function isn't allowed to change any data.
void writeData(const std::map<std::string, std::vector<std::pair<int, int>>>& dataMap) {
    for (const auto& entry : dataMap) {                              // For every unique entry(building):
        std::string filename = entry.first + ".txt";                // Names files "<buildingName>.txt"
        std::ofstream outFile(filename);                            // Creates the files

        // Error message if file cannot be opened
        if (!outFile.is_open()) {
            std::cerr << "Failed to open " << filename << std::endl;
            continue;
        }

        // Writes every pair of vectors to the file for that building.
        for (const auto& pair : entry.second) {
            outFile << pair.first << " " << pair.second << std::endl;
        }

        outFile.close();
    }
}
