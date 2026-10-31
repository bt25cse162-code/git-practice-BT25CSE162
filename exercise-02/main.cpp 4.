#include <iostream>
using namespace std;

class Bank {
private:
    static float interestRate;
    int accountNumber;
    float balance;

public:
    Bank(int accNo, float amount) {
        accountNumber = accNo;
        balance = amount;
    }

    static void setInterestRate(float rate) {
        interestRate = rate;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Annual Interest: "
             << balance * interestRate / 100 << endl;
        cout << endl;
    }
};

float Bank::interestRate = 5.0;

int main() {
    Bank account1(1001, 10000);
    Bank account2(1002, 20000);

    cout << "Initial Interest Rate: 5%" << endl;
    account1.display();
    account2.display();

    Bank::setInterestRate(6.0);

    cout << "Updated Interest Rate: 6%" << endl;
    account1.display();
    account2.display();

    return 0;
}
