#include <iostream>
using namespace std;
class Person{
	protected:
	string name;
	int age;
	public:
	person(){
	}
	Person(string nam,int a)
	{
		name=nam;
		age=a;
	}
	void setname(string nam)
	{
		name=nam;
	}
	string getname()
	{ 
	    return name;
	}
	void setage(int a)
	{
		age=a;
	}
	int getage()
	{
		return age;
	}
	void display()
	{
		cout<<"YOUR NAME IS"<<" : "<<name<<endl;
		cout<<"YOUR AGE IS"<<" : "<<age<<endl;
	}
};
class Salaried : public virtual Person{
	protected:
	float salary;
	public:
	Salaried(float sal){
		salary=sal;
	}
	void setsalary(float sal)
	{
		salary=sal;
	}
	float getsalary()
	{
		return salary;
	}
	void display()
	{
		cout<<"YOUR NAME IS"<<" : "<<name<<endl;
		cout<<"YOUR AGE IS"<<" : "<<age<<endl;
		cout<<"YOUR SALARY IS"<<" : "<<salary<<endl;
	}
	
};
class Student : public virtual Person{
	protected:
	float gpa;
	int credit_hours;
	public:
	Student(float g,int c)
	{
		gpa=g;
		credit_hours=c;
	}
	void setgpa(float g)
	{
		gpa=g;
	}
	float getgpa()
	{
		return gpa;
	}
	void setcredit_hours(int c)
	{
		credit_hours=c;
	}
	int getcredit_hours()
	{
		return credit_hours;
	}
};
class GraduateAssistant:public Salaried,public Student{
	private:
	int course_assistant;
	public:
	    GraduateAssistant(string n, int a, int sal, float gpa, int cr, int cr_assist)
        : Person(n, a), Salaried(sal), Student(gpa, cr), courses_assisted(cr_assist) {}
    

};
int main()
{
	GraduateAssistant g1(12);
	g1.display();
    return 0;
}
