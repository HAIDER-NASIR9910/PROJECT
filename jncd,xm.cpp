#include <iostream>
using namespace std;

class student {
protected:
    string name;
    int id;
    float gpa;
public:
    student(string nam, int i, float g) {
        name = nam;
        id = i;
        gpa = g;
    }

    void display() const {
        cout << "NAME IS: " << name << endl;
        cout << "ID IS: " << id << endl;
        cout << "GPA IS: " << gpa << endl;
    }
};

class test : public virtual student {
private:
    int num1;
    int num2;
    static string name;

public:
    // Constructor to initialize num1, num2 and student information
    test(int n1, int n2, string nam, int i, float g) : student(nam, i, g), num1(n1), num2(n2) {}

    // Setters and getters for num1 and num2
    void setnum1(int n1) {
        num1 = n1;
    }

    int getnum1() const {
        return num1;
    }

    void setnum2(int n2) {
        num2 = n2;
    }

    int getnum2() const {
        return num2;
    }

    // Display method that calls the base class display and then displays num1 and num2
    void display() const {
        student::display();  // Display base class information
        cout << "NUM1 IS: " << num1 << endl;
        cout << "NUM2 IS: " << num2 << endl;
    }

    // Static methods for the static variable 'name'
    static void setname(string nam) {
        name = nam;
    }

    static string getname() {
        return name;
    }

    static void print_name() {
        cout << "Static NAME IS: " << name << endl;
    }
};

// Initialize static variable outside the class
string test::name = "HAIDER";

// Overloading the operator '+' to add two test objects
test operator +(const test &t1, const test &t2) {
    test t3(0, 0, "", 0, 0);  // Create a temporary object t3
    t3.setnum1(t1.getnum1() + t2.getnum1());
    t3.setnum2(t1.getnum2() + t2.getnum2());
    return t3;  // Return the new test object
}

int main() {
    test obj1(3, 5, "John", 101, 3.8);
    test obj2(7, 2, "Alice", 102, 3.6);

    // Using the overloaded '+' operator to create a new test object
    test obj3 = obj1 + obj2;

    // Displaying the values
    obj1.display();
    obj2.display();
    obj3.display();

    // Demonstrating the static name handling
    test::print_name();

    // Change static name and display again
    test::setname("NEW NAME");
    test::print_name();

    return 0;
}

