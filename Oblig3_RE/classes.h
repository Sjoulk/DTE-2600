#ifndef CLASSES_H
#define CLASSES_H
#include <string>
#include <vector>

class Room {

public:
    Room(std::pair<double, double>, std::string bygg);
    double getArea() const;
    double getLength() const;
    double getWidth() const;
    std::string getName() const;

private:
    std::pair<double, double> roomDimensions;
    std::string bygg;
    double length;
    double width;
};

class Building {

public:
    Building(std::string bygg);
    double getTotalArea() const;
    int Cleaners() const;
    std::string getbName() const;
    const std::vector<Room>& getRooms() const;
    void addRoom(Room room);

private:
    std::vector<Room> rooms;
    std::string bygg;
    double totalArea;
};

#endif // CLASSES_H
