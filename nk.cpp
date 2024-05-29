#include <iostream>
using namespace std;

struct student {
    string name;
    string rej;
    int rollno;
};

// Function declaration
void func1(student arr[3]);

int main() {
    student arr[3];

    // Input student details
    for(int i = 0; i < 3; i++) {
        cout << "Enter name for student " << i+1 << ": ";
        cin >> arr[i].name;
        cout << "Enter rej for student " << i+1 << ": ";
        cin >> arr[i].rej;
        cout << "Enter roll no for student " << i+1 << ": ";
        cin >> arr[i].rollno;
    }

    // Call function to print student details
    func1(arr);

    return 0;
}

// Function definition
void func1(student arr[3]) {
    for(int i = 0; i < 3; i++) {
        cout << "Student " << i+1 << ":" << endl;
        cout << "Name: " << arr[i].name << endl;
        cout << "Rej: " << arr[i].rej << endl;
        cout << "Roll No: " << arr[i].rollno << endl;
        cout << endl;
    }
}

