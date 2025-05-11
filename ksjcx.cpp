#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    // Public constructor to initialize name and age
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
    
    virtual void display() {  // Virtual display function for polymorphism
        cout << "YOUR NAME IS" << " : " << name << endl;
        cout << "YOUR AGE IS" << " : " << age << endl;
    }
};

class Salaried : public virtual Person {
protected:
    float salary;
public:
    // Public constructor for Salaried class
    Salaried(float sal, string nam, int a) : Person(nam, a) {
        salary = sal;
    }

    void setsalary(float sal) {
        salary = sal;
    }

    float getsalary() {
        return salary;
    }

    void display() override {  // Overriding display function
        Person::display();  // Calling Person's display
        cout << "YOUR SALARY IS" << " : " << salary << endl;
    }
};

class Student : public virtual Person {
protected:
    float gpa;
    int credit_hours;
public:
    // Public constructor for Student class
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

    void display() override {  // Overriding display function
        Person::display();  // Calling Person's display
        cout << "YOUR GPA IS" << " : " << gpa << endl;
        cout << "YOUR CREDIT HOURS ARE" << " : " << credit_hours << endl;
    }
};

class GraduateAssistant : public Salaried, public Student {
public:
    // Public constructor for GraduateAssistant
    GraduateAssistant(float sal, float g, int c, string nam, int a)
        : Salaried(sal, nam, a), Student(g, c, nam, a) {}

    void display() override {  // Overriding display function
        Salaried::display();  // Calling Salaried's display
        Student::display();   // Calling Student's display
    }
};

int main() {
    // Creating GraduateAssistant object with sample values
    GraduateAssistant g1(120000, 3.91, 19, "HAIDER", 18);
    
    // Displaying information of GraduateAssistant g1
    g1.display();
    
    return 0;
}


