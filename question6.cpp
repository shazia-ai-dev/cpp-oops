#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }
    void display() {                          // Function Overloading
        cout << real << " + " << imag << "i" << endl;
    }

    void display(string msg) {
        cout << msg << real << " + " << imag << "i" << endl;
    }

    Complex operator+(Complex c) {               // Operator Overloading
        Complex temp(0, 0);
        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }
};
int main() {
    Complex c1(7, 4);
    Complex c2(8, 7);

    cout << "First Complex Number: ";
    c1.display();
    c2.display("Second Complex Number: ");
    Complex c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();

    return 0;
}