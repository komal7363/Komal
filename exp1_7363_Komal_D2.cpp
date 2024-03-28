//In the field of programming, Iteration Statements are helpful when we need a specific task in repetition.
//They’re essential as they reduce hours of work to seconds. An iteration is a sequence of instructions that is
//continually repeated until a certain condition is reached. As per given statement you need to implement the
//task using iterations.
//A number is said to be valid if it is divisible by 8. Develop a logic that allows the user to keep entering
//numbers as long as the input is valid and also displays a count of the valid numbers.

#include <iostream>
using namespace std;
bool isValid(int number){
    return number % 7 == 0;
}

int main(){
    int validCount = 0;
    int number;

    do{
        cout<< "Enter the number: ";
        cin>> number;

        if(isValid(number)) {
            validCount++;
        } else{
            break;
        }
    } while (true);
cout<< "Total " << validCount << " numbers are valid." << endl;

    return 0;
}
