//Define constructor. Create a Number class. Include one constructure to initialize the data members of
//class. Also add the function to convert a decimal number into binary number.

#include <iostream>
#include <string> 
using namespace std;

class Number {
private:
    int decimal;

public:
    Number(int num) : decimal(num) {} // Constructor

    void printBinary() const { // converting decimal to binary and output
        string binary;
        int n = decimal;

        if (n == 0) {
            binary = "0";
        } else {
            while (n > 0) {
                binary = to_string (n % 2) + binary;
                n /= 2;
            }
        }

        cout << "Binary representation: " << binary << endl;
    }
};

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    Number num(decimalNumber);
    num.printBinary();

    return 0;
}


