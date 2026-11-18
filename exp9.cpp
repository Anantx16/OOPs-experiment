#include <iostream>
using namespace std;

class InsufficientBalance {};

class BankAccount {
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void withdraw(double amount) {
        if(amount > balance)
            throw InsufficientBalance();

        balance -= amount;

        cout << "Withdrawal Successful\n";
        cout << "Balance = "
             << balance << endl;
    }
};

int main() {

    BankAccount acc(5000);

    try {
        acc.withdraw(7000);
    }

    catch(InsufficientBalance) {
        cout << "Exception: Insufficient Balance\n";
    }

    return 0;
}
