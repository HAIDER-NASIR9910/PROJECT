#include <iostream>
using namespace std;
class employee{
	private:
	int salary;
	public:
	employee(int sal): salary(sal){}
	void setsalary(int sal)
	{
		salary=sal;
	}
	int getsalary()
	{
		return salary;
	}
};
class student{
	private:
	string name;
	int id;
	float gpa;
	public:
	student(string nam,int i, float g):name(nam),id(i),gpa(g){}
	void setid(int i)
	{
		id=i;
	}
	int getid()
	{
		return id;
	}
	void setgpa(int g)
	{
		gpa=g;
	}
	int getgpa()
	{
		return gpa;
	}
	
	void display()
	{
		cout<<"NAME IS"<<" : "<<name<<endl;
		cout<<"ID IS"<<" : "<<id<<endl;
		cout<<"GPA IS"<<" : "<<gpa<<endl;
		cout<<"DISPLAY SAKARY+GPA"<<" : "<<gpa<<endl;
	}
};
student operator +(student s1, employee e1)
{
	student s2(" ",0,0.0);
	s2.setgpa(s1.getgpa()+e1.getsalary());
	return s2;	
}
int main()
{
	employee e1(20000);
	student s1("HAIDER",1,3.91);
	student st4=s1+e1;
	st4.display();
	

    return 0;
}

