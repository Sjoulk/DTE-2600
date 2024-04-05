#include <iostream>
#include "fileops.h"
#include "building.h"
#include "room.h"



int main()
{
    auto dataMap = readData("input_rom-1.txt");             // specifies input file
    writeData(dataMap);                                     // Writes files from the datamap

    // Puts all building names into a string vector.
    std::vector<std::string> buildingNames = getbName(dataMap);

    // prints out all building names
    std::cout << "Building names:" << std::endl;
    for (const auto& name : buildingNames) {
        std::cout << name << std::endl;
    }

    // Puts all rooms into a vector of pairs
    // std::vector<std::pair<int, int>> roomvector = getRooms(dataMap);

    // std::cout << "Rooms: " << std::endl;
    // for (const auto& rom : roomvector) {
    //     std::cout << rom << std::endl;
    // }

    //auto x = dataMap.at(0);

    std::cout << dataMap["A"][0].first << std::endl;
    // ["A"] = key
    // [0] = vector index
    // .first = pair index

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
