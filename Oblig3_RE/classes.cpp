#include "classes.h"
#include <algorithm>
#include <cmath>

// std::map<std::string, Building> metaMap; // Map containing all buildings -> moved to fileOps

//---------------------------------------------------------------------------------
// Room functions
//---------------------------------------------------------------------------------
Room::Room(std::pair<double, double> roomDimensions, std::string bygg) : length(roomDimensions.first), width(roomDimensions.second), bygg(bygg) {}

double Room::getArea() const {
    return length*width;
}

double Room::getLength() const {
    return length;
}

double Room::getWidth() const {
    return width;
}

std::string Room::getName() const {
    return bygg;
}
//---------------------------------------------------------------------------------
// Building functions
//---------------------------------------------------------------------------------
Building::Building(std::string bygg) : bygg(bygg) {}


std::string Building::getbName() const{
    return bygg;
}

// Retrieves the rooms vector for a given building
const std::vector<Room>& Building::getRooms() const  {
    return rooms;
}

// Calculates the total area of a building
double Building::getTotalArea() const {
    double totalArea = 0;
    for (auto& room : rooms) {              // Iterates over all rooms in the building and calculates
        totalArea += room.getArea();        // the area for each room, then returns the sum of areas.
    }
    return totalArea;
}

// Calculates the number of cleaners required for a given building
int Building::Cleaners() const {
    double krav1 = Building::getTotalArea() / 15.0;             // ceil rounds up to nearest integer.
    double krav2 = rooms.size() / 2.0;                         // Calculates number of cleaners required in
    return std::max(ceil(krav1), ceil(krav2));                // two ways. Returns the highest value of the two

}

void Building::addRoom(Room room) {                     // Puts a room at the back of the rooms vector
    rooms.push_back(room);                              // and updates the total area accordingly.
    totalArea += room.getArea();
}
