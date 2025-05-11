#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:

    Person() {}
    Person(string n, int a) : name(n), age(a) {}

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void display() {
        cout << "Name is " << name << endl;
        cout << "Age is " << age << endl;
    }
};

class Salaried : public virtual Person {
protected:
    int salary;
public:
    Salaried(int sal) : salary(sal) {}

    void setSalary(int sal) {
        salary = sal;
    }

    void displaySalary() {
        cout << "Monthly Salary is " << salary << endl;
    }
};

class Student : public virtual Person {
protected:
    float GPA;
    int credit_hours;
public:
    Student(float gpa, int cr) : GPA(gpa), credit_hours(cr) {}

    void setStudentDetails(float gpa, int cr) {
        GPA = gpa;
        credit_hours = cr;
    }

    void displayStudent() {
        cout << "GPA is: " << GPA << endl;
        cout << "Credit Hours are: " << credit_hours << endl;
    }
};

class GraduateAssistant : public Student, public Salaried {
private:
    int courses_assisted;
public:
    GraduateAssistant(string n, int a, int sal, float gpa, int cr, int cr_assist)
        : Person(n, a), Salaried(sal), Student(gpa, cr), courses_assisted(cr_assist) {}

    void setGraduateAssistant(int cr_assist) {
        courses_assisted = cr_assist;
    }

    void displayGraduateAssistant()
	{
		cout<<"YOUR NAME IS"<<" : "<<Student::getname()<<endl;
		cout<<"YOUR AGE ID"<<" : "<<Student::getage()<<endl;
		cout<<"YOUR SALARY IS"<<" : "<<Salaried::getsalary()<<endl;
		cout<<"YOUR GPA IS"<<" : "<<Student::getgpa()<<endl;
		cout<<"YOUR CREDIT HOURS ARE"<<" : "<<Student::getcredit_hours()<<endl;
	}
};

int main() {
   
    GraduateAssistant g1("Haider", 18, 30000, 3.91, 9, 6);

    g1.displayGraduateAssistant();

    return 0;
}


