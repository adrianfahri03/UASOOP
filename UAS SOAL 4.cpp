#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string owner, double balance) {
        this->owner = owner;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of Rp" << amount << " successful." << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of Rp" << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance for withdrawal." << endl;
        }
    }

    void display_balance() {
        cout << "Current balance for " << owner << ": Rp" << balance << endl;
    }
};

int main() {
    BankAccount my_account("Adrian Nashif Fahri", 10000);

    my_account.deposit(100000);

    my_account.withdraw(200000);
    my_account.withdraw(150000); 

    my_account.display_balance();

    return 0;
}
