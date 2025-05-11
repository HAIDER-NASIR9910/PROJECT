#include <iostream>
using namespace std;
class person{
	protected:
	string name;
	int id;
	public:
	person(){}
	person(string n,int i)
	{
		name=n;
		id=i;
	}
	void setdata(string nam,int i)
	{
		name=nam;
		id=i;
	}
	string getname()
	{
		return name;
	}
	int getid()
	{
		return id;
	}
	void display()
	{
		cout<<"YOUR NAME IS"<<" : "<<name<<endl;
		cout<<"YOUR ID IS"<<" : "<<id<<endl;
	}
};

class student:public virtual person{
	protected:
	float gpa;
	public:
	student(float g) : person(" ",00)
	{
		gpa=g;
	}
	void setgpa(float g)
	{
		gpa=g;
	}
	float getgpa()
	{
		return gpa;
	}
	void display()
	{
		person::display();
		cout<<"YOUR GPA IS"<<" : "<<gpa<<endl;
	}
};

class employee:public virtual person{
	protected:
	int salary;
	public:
	employee(int s):person(" ",0)
	{
		salary=s;
	}
	void setsalary(int s) 
	{
		salary=s;
	}
	int getsalary()
	{
		return salary;
	}
	void display()
	{
		person::display();
		cout<<"YOUR SALARY IS"<<" : "<<salary<<endl;
	}
};

class graduate_student:public student,public employee
{
	protected:
	int no;
	public:
	graduate_student(int n):no(n),student(0.0),employee(0){}
	void display()
	{
		cout<<"YOUR NAME IS"<<" : "<<person::getname()<<endl;
		cout<<"YOUR ID IS"<<" : "<<person::getid()<<endl;
		cout<<"YOUR SALARY IS"<<" : "<<employee::getsalary()<<endl;
		cout<<"YOUR GPA IS"<<" : "<<student::getgpa()<<endl;
	}
};
int main()
{
	graduate_student g1(23);
	g1.setdata("HAIDER",1);
	g1.setgpa(3.91);
	g1.setsalary(200000);
	g1.display();
	

    return 0;
}

