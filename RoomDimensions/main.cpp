#include <iostream>
#include "fileops.h"
//#include "building.h"
//#include "room.h"

using namespace std;

// Function to check if an input string (z) is already in the vector
/*bool isUnique(const std::vector<std::string>& vec, const std::string& value) {
    return std::find(vec.begin(), vec.end(), value) == vec.end();
}*/
int main() {
    // std::ifstream inputFile("input_rom-1.txt");         // Declaring inputFile
    // //std::vector<std::string> uniq;                      // Declaring string vector to store unique building names, A, B, C
    // std::map<std::string, std::vector<std::pair<int, int>>> dataMap; // Map where room dimensions are linked to buildings
    //                                                                  // or: maps strings(z) to vectors of integer pairs(x, y)
    // if (!inputFile.is_open()) {
    //     std::cerr << "Failed to open file." << std::endl;
    //     return 1;
    // }

    // int x, y;
    // std::string z;

    // while (inputFile >> x >> y >> z) {                  // If the string is not already in the string vector
    //     /*if (isUnique(uniq, z)) {                        // it is added to the back of the vector.
    //         uniq.push_back(z);
    //     }*/
    //     dataMap[z].push_back(std::make_pair(x, y));     // Makes a pair of x & y values
    // }

    // inputFile.close();                                  // Closes the inputFile after reading
    // /*std::sort(uniq.begin(), uniq.end());                // Alphabetically sorts the string vector

    // std::cout << "\nUnique buildings found in the input file:" << std::endl;
    // for (const auto& str : uniq) {                      // Outputs every element from the vector.
    //     std::cout << str << std::endl;
    // }*/

    // // Iterates over the map and writes each vector to a corresponding file.txt

    // for (const auto& entry : dataMap) {
    //     std::string filename = entry.first + ".txt";
    //     std::ofstream outFile(filename);

    //     for (const auto& pair : entry.second) {
    //         outFile << pair.first << " " << pair.second << std::endl;
    //     }

    //     outFile.close();
    // }

    auto dataMap = readData("input_rom-1.txt");             // specifies input file
    writeData(dataMap);                                     // Writes files from the datamap

    // datamap print to console for debugging
    for (const auto& entry : dataMap) {
        // Building(entry.first); <-- lag en instance of building for hver unique key
        std::cout << "Rooms in building " << entry.first << ":" << std::endl;
        for (const auto& pair : entry.second) {
            std::cout << pair.first << ", " << pair.second << std::endl;
        } // x1 = pair.first, y1 = pair.second
        std::cout << std::endl;
    }



    return 0;
}
