//Classes are mainly used for wrapping a data and functions into a single unit. These are the main feature of
//object-oriented programming. Whenever we need to encapsulate the data and the logic for processing the
//data. To maintain clarity, you decide to define member functions outside the class declaration. Explain how
//you would use the scope resolution operator to define the functions outside the class and ensure proper
//linkage with the help of c++ programming example.

#include <iostream> 
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass(int d) : data(d) {}  // Constructor

    void display() {
    cout << "Data: " << data << endl;
    }

    static void staticDisplay() {
    cout << "It is a static member function" << endl;
    }
};

int main() {
    MyClass obj(42);
    obj.display();
    MyClass::staticDisplay();

    return 0;
}

