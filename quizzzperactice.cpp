#include <iostream>
using namespace std;
class person{
	protected:
	string name;
	int age;
	public:
	person(string nam,int a):name(nam),age(a){}
	void display()
	{
		cout<<"YOUR NAME IS"<<" : "<<name<<endl;
		cout<<"YOUR AGE IS"<<" : "<<age<<endl;
	}
};
class student: public person{
	protected:
	int id;
	float gpa;
	public:
	student(int i,float g,string nam,int ag):id(i),gpa(g),person(nam,ag){}
	void display()
	{
		person::display();
		cout<<"YOUR GPA IS"<<" : "<<gpa<<endl;
		cout<<"YOUR ID IS"<<" : "<<id<<endl;	
	}
	
};
class semester:public student{
	protected:
	int semster;
	public:
	semester(int s,int i,float g,string nam,int ag):semster(s),student(i,g,nam,ag){}
	void display();
};
void semester::display(){
	student::display();
	cout<<"YOUR SEMESTER IS"<<" : "<<semster<<endl;
}
int main()
{
	person p1("HAIDER",18);
	semester s1(2,123,3.91,"HAIDER",18);
	s1.display();

    return 0;
}

