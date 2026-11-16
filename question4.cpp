#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getPersonDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
// Single inheritance
class Student : public Person {
protected:
    int rollNo;
    string course;

public:
    void getStudentDetails() {
        getPersonDetails();
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter course: ";
        cin >> course;
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};
// Multilevel inheritance
class GraduateStudent : public Student {
private:
    string researchTopic;

public:
    void getGraduateDetails() {
        getStudentDetails();
        cout << "Enter research topic: ";
        cin >> researchTopic;
    }

    void displayGraduateDetails() {
        displayStudentDetails();
        cout << "Research Topic: " << researchTopic << endl;
    }
};
int main() {
    GraduateStudent g1;
    cout << "Enter Graduate Student Details\n";
    g1.getGraduateDetails();
    cout << "--- University Student Details ---";
    g1.displayGraduateDetails();

    return 0;
}