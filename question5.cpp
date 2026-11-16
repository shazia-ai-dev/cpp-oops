#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;  
};

//Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {      //parameterized constructor
        radius = r;
    }
    double area() override {
        return 3.14 * radius * radius;
    }
};

//Rectangle
class Rectangle : public Shape {
private:
    double length, breadth;

public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }
    double area() override {
        return length * breadth;
    }
};

//Triangle
class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }
    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    Circle c(6);
    Rectangle r(2, 4);
    Triangle t(3, 4);

    Shape* ptr;
    ptr = &c;
    cout << "Area of Circle: " << ptr->area() << endl;
    ptr = &r;
    cout << "Area of Rectangle: " << ptr->area() << endl;
    ptr = &t;
    cout << "Area of Triangle: " << ptr->area() << endl;

    return 0;
}
