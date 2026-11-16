#include <iostream>
#include <fstream>
using namespace std;

int main() {

    fstream file;

    file.open("student.csv", ios::out);
    file << "RollNo,Name,Marks" << endl;
    file << "1,jk,952" << endl;
    file << "2,tae,241" << endl;
    file << "3,rm,255" << endl;
    cout << "Data written successfully!" << endl;

    file.close();

    file.open("student.csv", ios::in);
    string line;
    cout << "\nStudent Records:" << endl;
    while (getline(file, line)) {
        cout << line << endl;
    }
    cout << "\nFile Pointer Operations:" << endl;
    cout << "Current Position: " << file.tellg() << endl;

    file.seekg(0, ios::beg);
    cout << "After seekg: " << file.tellg() << endl;

    file.close();

    file.open("student.csv", ios::out | ios::app);
    cout << "Before writing: " << file.tellp() << endl;
    file.seekp(0, ios::end);
    file << "4,min,203" << endl;
    cout << "After writing: " << file.tellp() << endl;
    file.close();

    return 0;
}