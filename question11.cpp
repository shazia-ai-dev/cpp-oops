#include <iostream>
using namespace std;
class BankAccount {
private:
    string name;
    int accountNumber;
    float balance;
public:
    BankAccount(string n, int acc, float bal) {
        name = n;
        accountNumber = acc;
        balance = bal;
    }
    void display() {
        cout << "\nAccount Holder: " << name;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nBalance: Rs. " << balance << endl;
    }
    void deposit(float amount) {
        if (amount > 0) {
            balance = balance + amount;
            cout << "Deposit successful!\n";
        }
        else {
            cout << "Invalid amount!\n";
        }
    }
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawal successful!\n";
        }
        else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }
    void checkBalance() {
        cout << "Your balance is: Rs. " << balance << endl;
    }
};
int main() {
    string name;
    int acc;
    float balance;
    int choice;
    float amount;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> acc;
    cout << "Enter initial balance: ";
    cin >> balance;

    BankAccount account1(name, acc, balance);
    do {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Display Details\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            account1.display();
            break;
        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account1.deposit(amount);
            break;
        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account1.withdraw(amount);
            break;
        case 4:
            account1.checkBalance();
            break;
        case 5:
            cout << "Thank you for using our bank!\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}