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

