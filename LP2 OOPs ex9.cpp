//Create a class Named StringOperation, take a input of any string variable and to perform the following operations on strings. 
//Note: Don’t use any of the string library functions.
// Finding the length of the string
// Finding the reverse of the string
// Finding the concatenation of 2 strings
// To compare 2 strings.

#include <iostream>
using namespace std;

class StringOperation {
private:
    string str;

public:
    StringOperation(const string& s) : str(s) {}

    int findLength() const {
        int length = 0;
        while (str[length] != '\0') { //using null terminator
            length++;
        }
        return length;
    }

    string findReverse() const {
        string reverseStr;
        for (int i = findLength() - 1; i >= 0; i--) {
            reverseStr.push_back(str[i]);
        }
        return reverseStr;
    }

    string concatenate(const std::string& otherStr) const {
        string concatenatedStr = str;
        for (int i = 0; i < otherStr.length(); i++) {
            concatenatedStr.push_back(otherStr[i]);
        }
        return concatenatedStr;
    }

    bool compare(const string& otherStr) const {
        if (findLength() != otherStr.length()) {
            return false;
        }
        for (int i = 0; i < findLength(); i++) {
            if (str[i] != otherStr[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    string inputStr;
    cout << "Enter a string: ";
    getline(cin, inputStr);

    StringOperation strOp(inputStr);

    cout << "Length of the string: " << strOp.findLength() << endl;
    cout << "Reverse of the string: " << strOp.findReverse() << endl;

    string otherStr;
    cout << "Enter another string for concatenation: ";
    getline(cin, otherStr);
    cout << "Concatenation of two strings: " << strOp.concatenate(otherStr) << endl;

    string compareStr;
    cout << "Enter another string for comparison: ";
    getline(cin, compareStr);
    if (strOp.compare(compareStr)) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}


