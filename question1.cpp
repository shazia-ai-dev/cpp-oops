#include <iostream>
#include <string>
using namespace std;

int main() {

    const double PI = 3.14159;
    int age;
    double marks;
    char grade;
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your marks: ";
    cin >> marks;
    cout << "Enter your grade: ";
    cin >> grade;


    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    cout << "PI: " << PI << endl;

    //arithmetic operators
    int a = 20, b = 5;
    cout << "\n--- Arithmetic Operators ---" << endl;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;

    //Relational operators
    cout << "\n--- Relational Operators ---" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;

    return 0;
}
