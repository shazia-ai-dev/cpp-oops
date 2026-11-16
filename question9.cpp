#include <iostream>
#include <exception>
using namespace std;

class InsufficientBalance : public exception {
public:
    const char* what() const noexcept {
        return "Insufficient Balance!";
    }
};
int main() {
    int balance = 5000;
    int amount;
    cout << "Current Balance: " << balance << endl;
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    try {
        if (amount <= 0) {
            throw "Invalid Amount!";
        }
        if (amount > balance) {
            throw InsufficientBalance();
        }
        balance = balance - amount;
        cout << "Withdrawal Successful!" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
    catch (InsufficientBalance &e) {
        cout << e.what() << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}