//An operator overloading allows custom behavior to be defined for built-in operators like addition (+),
//subtraction (-), when we used with user-defined types. When overloading binary operators as friend
//functions, external functions can access private members of a class. Provide examples how binary operator
//overloading is implemented using friend functions.

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

