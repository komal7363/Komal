#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    friend Number operator+(const Number& num1, const Number& num2);
    void display() const {
    cout << "Value: " << value << endl;
    }
};

Number operator+(const Number& num1, const Number& num2) {
    return Number(num1.value + num2.value);
}

int main() {
    Number num1(5);
    Number num2(10);

    Number sum = num1 + num2;
    sum.display();

    return 0;
}

