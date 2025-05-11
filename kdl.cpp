#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    // Constructor for Person class
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
    
    virtual void display() {  // Virtual display to allow polymorphism
        cout << "YOUR NAME IS : " << name << endl;
        cout << "YOUR AGE IS : " << age << endl;
    }
};

class Salaried : public virtual Person {
protected:
    float salary;
public:
    // Constructor for Salaried class
    Salaried(float sal, string nam, int a) : Person(nam, a) {
        salary = sal;
    }
    
    void setsalary(float sal) {
        salary = sal;
    }
    
    float getsalary() {
        return salary;
    }
    
    void display() override {  // Overridden display function
        Person::display();  // Call Person's display function
        cout << "YOUR SALARY IS : " << salary << endl;
    }
};

class Student : public virtual Person {
protected:
    float gpa;
    int credit_hours;
public:
    // Constructor for Student class
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
    
    void display() override {  // Overridden display function
        Person::display();  // Call Person's display function
        cout << "YOUR GPA IS : " << gpa << endl;
        cout << "YOUR CREDIT HOURS ARE : " << credit_hours << endl;
    }
};

class GraduateAssistant : public Salaried, public Student {
private:
    int course_assistant;
public:
    // Constructor for GraduateAssistant
    GraduateAssistant(float sal, float g, int c, string nam, int a, int cou)
        : Salaried(sal, nam, a), Student(g, c, nam, a) {
        course_assistant = cou;
    }

    void display() override {  // Overridden display function
        Salaried::display();  // Call Salaried's display function
        Student::display();  // Call Student's display function
        cout << "YOUR COURSE ASSISTANT HOURS ARE : " << course_assistant << endl;
    }
};

int main() {
    // Create GraduateAssistant object with proper arguments
    GraduateAssistant g1(120000, 3.9, 15, "HAIDER", 25, 10);
    
    // Display GraduateAssistant's details
    g1.display();
    
    return 0;
}

