#include <iostream>
using namespace std;

class Bank_account {
public:
    int balance;

    Bank_account(int b) {
        balance = b;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank_account obj1(500000);
    obj1.showBalance();

    return 0;
}
