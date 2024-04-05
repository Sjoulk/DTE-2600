#ifndef ROOM_H
#define ROOM_H

class Room {

public:
    int length;
    int width;
    int area;

    // Room(std::pair<int, int> rDimension, std::string name);
    Room(int length, int width) : length(length), width(width) {
        calculateArea();
    }

    void calculateArea() {
        area = length * width;
    }

    int getArea() const {
        return area;
    }

    int getLength() const {
        return length;
    }

    int getWidth() const {
        return width;
    }
};

#endif // ROOM_H
