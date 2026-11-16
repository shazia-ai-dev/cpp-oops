
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack {
    T arr[5];
    int top;
public:
    Stack() {
        top = -1;
    }

    void push(T x) {
        if (top == 4)
            cout << "Stack Full" << endl;
        else
            arr[++top] = x;
    }

    void pop() {
        if (top == -1)
            cout << "Stack Empty" << endl;
        else
            top--;
    }

    void display() {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << endl;
    }
};
int main() {
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    cout << "Integer Stack:" << endl;
    s1.display();

    Stack<float> s2;
    s2.push(2.5);
    s2.push(3.5);
    cout << "Float Stack:" << endl;
    s2.display();

    Stack<string> s3;
    s3.push("Apple");
    s3.push("Mango");
    cout << "String Stack:" << endl;
    s3.display();

    return 0;
}