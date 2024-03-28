//Objects and classes are used to wrap related functions and data in one place. An object is an entity that has state and behaviour. 
//Here, state means data and behaviour means functionality.
//Create a class Room with Data members: length, breadth. Include functions get () and display () to get and display the data of room.
//Include two additional functions: area () and perimeter () to calculate the area and perimeter of the room. Implement the class by creating at least 5 objects of the class and display the area
//and perimeter of all 5 rooms.

#include <iostream>
using namespace std;

class Room {
private:
    float length;
    float breadth;

public:
    // Constructor
    Room(float len, float brd) : length(len), breadth(brd) {}

    void get(float len, float brd) {
        length = len;
        breadth = brd;
    }

    void display() {
        cout << "Length: " << length << " meters" <<endl;
        cout << "Breadth: " << breadth << " meters" <<endl;
    }

    float area() { //to calculate area
        return length * breadth;
    }

    float perimeter() { //to calculate perimeter
        return 2 * (length + breadth);
    }
};

int main() {
     Room rooms[5] = {
        Room(10, 12),
        Room(15, 20),
        Room(8, 10),
        Room(12, 14),
        Room(18, 22)
    };

    for (int i = 0; i < 3; ++i) { //area and perimeter of each room
        cout << "Room " << i + 1 << ":\n";
        rooms[i].display();
        cout << "Area: " << rooms[i].area() << " sq. meters" << std::endl;
        cout << "Perimeter: " << rooms[i].perimeter() << " meters" << std::endl;
        cout <<endl;
    }

    return 0;
}

