#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int id;
    float gpa;

public:
    Student(string nam, int i, float g) : name(nam), id(i), gpa(g) {}

    bool operator>(const Student& st2) const {
        if (gpa > st2.gpa) {
            cout << name << " has a higher GPA than " << st2.name << endl;
            return true;
        } else {
            cout << st2.name << " has a higher GPA than " << name << endl;
            return false;
        }
    }

    bool operator<(const Student& st2) const {
        if (gpa < st2.gpa) {
            cout << st2.name << " has a higher GPA than " << name << endl;
            return true;
        } else {
            cout << name << " has a higher GPA than " << st2.name << endl;
            return false;
        }
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {
    Student st1("Haider", 1, 3.91);
    Student st2("Atta", 2, 3.49);
    int choice;

    cout << "Checking st1 > st2 press key 1" << endl;
    cout << "Checking st1 < st2 press key 2" << endl;
    cin >> choice;

    cout << "\nStudent 1 details:\n";
    st1.display();
    cout << "\nStudent 2 details:\n";
    st2.display();
    cout << endl;

    switch (choice) {
        case 1:
            st1 > st2;
            break;
        case 2:
            st1 < st2;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}

