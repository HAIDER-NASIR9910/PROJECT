#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string nam, int a) {
        name = nam;
        age = a;
    }
    void setname(string nam) {
        name = nam;
    }
    string getname() { 
        return name;
    }
    void setage(int a) {
        age = a;
    }
    int getage() {
        return age;
    }
    void display() {
        cout << "YOUR NAME IS" << " : " << name << endl;
        cout << "YOUR AGE IS" << " : " << age << endl;
    }
};

class Salaried : public virtual Person {
protected:
    float salary;
public:
    Salaried(float sal, string nam, int a) : Person(nam, a) {
        salary = sal;
    }
    void setsalary(float sal) {
        salary = sal;
    }
    float getsalary() {
        return salary;
    }
    void display() {
        cout << "YOUR NAME IS" << " : " << name << endl;
        cout << "YOUR AGE IS" << " : " << age << endl;
        cout << "YOUR SALARY IS" << " : " << salary << endl;
    }
};

class Student : public virtual Person {
protected:
    float gpa;
    int credit_hours;
public:
    Student(float g, int c, string nam, int a) : Person(nam, a) {
        gpa = g;
        credit_hours = c;
    }
    void setgpa(float g) {
        gpa = g;
    }
    float getgpa() {
        return gpa;
    }
    void setcredit_hours(int c) {
        credit_hours = c;
    }
    int getcredit_hours() {
        return credit_hours;
    }
};

class GraduateAssistant : public Salaried, public Student {
public:
    // Constructor should be public, so it can be used in main
    GraduateAssistant(float sal, float g, int c, string nam, int a) 
        : Salaried(sal, nam, a), Student(g, c) {}

    void display() {
        cout << "YOUR NAME IS" << " : " << Student::getname() << endl;
        cout << "YOUR AGE IS" << " : " << Student::getage() << endl;
        cout << "YOUR SALARY IS" << " : " << Salaried::getsalary() << endl;
        cout << "YOUR GPA IS" << " : " << Student::getgpa() << endl;
        cout << "YOUR CREDIT HOURS ARE" << " : " << Student::getcredit_hours() << endl;
    }
};

int main() {
    GraduateAssistant g1(120000, 3.91, 19, "HAIDER", 18); // Create a GraduateAssistant object
    g1.display();  // Call display method to show details
    return 0;
}

