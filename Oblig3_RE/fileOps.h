#ifndef FILEOPS_H
#define FILEOPS_H
#include "classes.h"
#include <iostream>
#include <fstream>
#include <map>


// One map to find them, and in the darkness bind them. One map to rule them all
std::map<std::string, Building> metaMap; // (Map containing all buildings)

//--------------------------------------------------------------------
// input / read file function
//--------------------------------------------------------------------

void input(/*std::string inPath*/) {
    std::fstream inputFile;

    // Takes for granted that the file is named "input.txt" and is in the .exe folder.
    // File name can be changed here.
    inputFile.open("input.txt", std::ios::in);     // Opens inputFile in read mode

    // Error message if file cannot be opened
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        exit(1);
    }

    int x, y;
    std::string bygg;

    // Reads the file and sorts the variables into (x,y) room-dimension pairs
    // that are used to make new rooms under the corresponding building.
    if (inputFile.is_open()) {
        while (inputFile >> x >> y >> bygg) {
            std::pair<double, double> roomDimensions = std::make_pair(x, y);
            Room room(roomDimensions, bygg);


            // If the building does not already exist in metaMap, a new one is created.
            // A room will be added to the new building, and the new building is added to the metaMap.
            if(metaMap.find(bygg) == metaMap.end()) {
                Building building(bygg);
                building.addRoom(room);
                building.Cleaners();
                metaMap.emplace(bygg, building);        // Emplace inserts a new element into the map container
                                                        // and directly constructs it

            } else {
                Building &oldBuilding = metaMap.find(bygg)->second; // Adds a room to an exsisting building
                oldBuilding.addRoom(room);                          // refered to as oldBuilding
            }
        }
        inputFile.close();                                 // Closes the file

        //debugging
        //std::cout << "File succesfully read" << std::endl;

    }
}
//--------------------------------------------------------------------
// output / write file function
//--------------------------------------------------------------------

void output(/*std::string outPath*/) {
        for (const auto& entry : metaMap) {                     // For every unique entry(bygg):
            std::string byggname = entry.first;                // Names files "<byggname>.txt"
            std::ofstream outputFile(byggname + ".txt");      // Creates the files

           // References the second entry in metaMap as 'building'
            const Building &building = entry.second;

            // Writes the building name to the first line of the .txt file
            outputFile << "Building name: " << building.getbName() << std::endl;

            // Writes the total area of all rooms to the 2nd line of the .txt file
            outputFile << "Total area: " << building.getTotalArea() << " m^2." << std::endl;

            // Writes the number of elements in the Room vector for the given building.
            outputFile << "Number of rooms: " << building.getRooms().size() << std::endl;

            // Writes the number of cleaners needed for the given building.
            outputFile << "Cleaners required: " << building.Cleaners() << std::endl;

            // Lists the x&y dimensions of all rooms in the building.
            outputFile << "\nRooms in building " << building.getbName() << ":" << std::endl;

            int i = 0;  // Creating variable "i" to number the individual rooms

            // Iterates over all rooms in the room vector for the building, retrieving their dimensions.
            for (const Room &room : building.getRooms()) {
                i ++;   // increases the room number every time the loop runs.
                outputFile << "Room " << i << ": " << "L: " << room.getLength() << ", W: " << room.getWidth() << std::endl;
            }


            // Error message if file cannot be written
            if (!outputFile.is_open()) {
                std::cerr << "Failed to write " << byggname << std::endl;
                exit(2);
            }

            outputFile.close();         // Closes the file
    }
}
// ------------------------------------------------------------------------------------------
//                                  OLD CODE (NOT IN USE)
// ------------------------------------------------------------------------------------------
/*
auto dataMap = readData("input_rom-1.txt");             // specifies input file
writeData(dataMap);                                     // Writes files from the datamap

// Puts all building names into a string vector.
std::vector<std::string> buildingNames = getbName(dataMap);

// prints out all building names
std::cout << "Building names:" << std::endl;
for (const auto &name : buildingNames) {
    std::cout << name << std::endl;
}
*/
// readData function
/*
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
void dataWrite(const std::map<std::string, building>& something);

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

            //std::cout << metaMap["A"][0].first << std::endl;
            // ["A"] = key
            // [0] = vector index
            // .first = pair index

        outFile.close();
    }
}

std::vector<std::string> getbName(const std::map<std::string, std::vector<std::pair<int, int>>>& dataMap) {

    std::vector<std::string> bName;
    for (const auto& element : dataMap) {
        bName.push_back(element.first);
    }
    return bName;
}

// std::vector<std::pair<int, int>> getRooms(const std::map<std::string, std::vector<std::pair<int, int>>>& dataMap) {

//     std::vector<std::pair<int, int>> nRoom;
//     for (const auto& rom : dataMap) {
//         nRoom.push_back(rom.second);
//     }
//     return nRoom;
// }
*/
#endif // FILEOPS_H
