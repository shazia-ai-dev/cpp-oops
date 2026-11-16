#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> marks = {85, 60, 75, 95, 80};
    map<string, int> students;

    students["jk"] = 456;
    students["tae"] = 786;
    students["min"] = 321;
    students["rm"] = 123;

    //Unordered Map
    unordered_map<string, int> data;
    data["jk"] = 75;
    data["tae"] = 90;

    cout << "Student Marks:" << endl;
    for (auto x : students) {
        cout << x.first << " : " << x.second << endl;
    }
    // Sort Algorithm
    sort(marks.begin(), marks.end());
    cout << "\nSorted Marks: ";
    for (int x : marks)
        cout << x << " ";

    // Find_if Algorithm
    auto it = find_if(marks.begin(), marks.end(),
                      [](int x) { return x > 80; });

    if (it != marks.end())
        cout << "\nFirst mark above 80: " << *it << endl;

    // Transform Algorithm
    transform(marks.begin(), marks.end(), marks.begin(),
              [](int x) { return x + 5; });

    cout << "\nMarks after adding 5: ";
    for (int x : marks)
        cout << x << " ";

    return 0;
}