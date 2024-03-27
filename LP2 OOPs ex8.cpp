//Maintain a banking application that simulates transactions between multiple bank accounts. Each bank account has a unique 
//account number, and you need to keep track of the total number of transactions performed across all accounts.
//a. Design a class to represent bank accounts in C++ and utilize static variables and methods to manage transaction data.
//b. Discuss how you would implement a static variable to count the total number of transactions and provide static methods to
//access this variable and update it whenever a transaction occurs.

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
    static int totalTransactions;

public:
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    void deposit(double amount) {
        balance += amount;
        totalTransactions++; 
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            totalTransactions++; // Increment total transactions
        } else {
            cout << "Balance is insufficient." <<endl;
        }
    }

    void display() const {
        cout << "Account Number: " << accountNumber <<endl;
        cout << "Balance: " << balance <<endl;
    }

    static int getTotalTransactions() {
        return totalTransactions;
    }
};

int BankAccount::totalTransactions = 0;

int main() {
    BankAccount account1(1005, 5000);
    BankAccount account2(1008, 3000);

    account1.deposit(1000);
    account1.withdraw(200);
    account2.deposit(500);
    account2.withdraw(1000);

    cout << "Account 1 Details:" <<endl;
    account1.display();
    cout <<endl;

    cout << "Account 2 Details:" <<endl;
    account2.display();
    cout <<endl;

    cout << "Total Transactions: " << BankAccount::getTotalTransactions() <<endl;

    return 0;
}

