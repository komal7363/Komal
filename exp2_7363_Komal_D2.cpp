//Take a input from user with a positive integer. Write a function to compute the sum of series where n is input
//by the user in the main function. Find sum of series where i-th term is sum of first i natural numbers.

#include <iostream>
using namespace std;
int sumOfSeries(int a){
    int sum = 0;
    for (int i = 1; i <= a; i++) {
       sum += i * (i + 1) / 2;
    }
    return sum;
}

int main() {
    int a;
    cout<< "Enter some positive integer: ";
    cin>>a;

    if (a <= 0) {
        cerr << "Only enter a positive integer." <<endl;
        return 1;
    }

    int result = sumOfSeries(a);
cout << "Sum of series: " << result <<endl;
 return 0;
}

