#include <iostream>
using namespace std;
class Person{
	protected:
		string name;
		int age;
	public:
		Person(){}
		
		Person(string n, int a):name(n), age(a){}
		
		void setName(string n){
			name = n;
		}
		void setAge(int a){
			age = a;
		}
		void display(){
			cout << "Name is " << name << endl;
			cout << "Age is " << age << endl;
		}
};
class Salaried : public virtual Person{
	protected:
		int salery;
	public:
		Salaried(int sal):salery(sal){}
	
		void setSal(int sal){
			salery = sal;
		}
		void displaySal(){
			cout << "Monthly Salary is " << salery << endl;
		}
};
class Student : public virtual Person{
	protected:
		float GPA;
		int credit_hours;
	public:
		Student(float gpa, int cr):GPA(gpa),credit_hours(cr){};
		void setStd(float gpa, int cr){
			GPA = gpa;
			credit_hours = cr;
		}
		void displayStd(){
			cout << "GPA is: " << GPA << endl;
			cout << "Credit_Hours is: " << credit_hours << endl;
		}
};

class Grad_Assistant:public Student, public Salaried{
	protected:
		int courses_assisted;
	public:
		Grad_Assistant(int cr_assist):courses_assisted(cr_assist), Student(0.0,0), Salaried(0){}
		void setGradAssist(int cr_assist){
			courses_assisted = cr_assist;
		}
		void display_grad(){
			cout << "Name is " << name << endl;
			cout << "Courses Assisted: " << courses_assisted << endl;
			cout << "GPA is: " << GPA << endl;
			cout << "Credit_Hours is: " << credit_hours << endl;
			cout << "Monthly Salary is " << salery << endl;
		}
};

int main(){
	Grad_Assistant displayData(6);
	displayData.setName("Haider");
	displayData.setAge(18);
	displayData.setSal(30000);
	displayData.setStd(3.91,9);
	displayData.display_grad();

}
