#include <iostream>
using namespace std;
class student{
	private:
	string name;
	int id;
	float gpa;
	public:
	student(string nam,int i,float g):name(nam),id(i),gpa(g){}
	stident(student s1)
	{
		name=s1.name;
		id=s1.id;
		gpa=s1.gpa;;
	}
	void displaya()
	{
		cout<<"NAME IS"<<" : "<<name<<endl;
		cout<<"ID IS"<<" : "<<id<<endl;
		cout<<"GPA IS"<<" : "<<gpa<<endl;
	}
	student operator +(student s2)
	{
		student s3(" ",0,0.0);
		s3.name=name+s2.name;
		s3.gpa=gpa+s2.gpa;
		s3.id=id+s2.id;
		return s3;
	}
	void display()
	{
		cout<<"NAME IS"<<" : "<<name<<endl;
		cout<<"ID IS"<<" : "<<id<<endl;
		cout<<"GPA IS"<<" : "<<gpa<<endl;
	}
	
};
int main()
{
	student s1("HAIDER NASIR",1,3.91);
	s1.display();
	student s2=s1;
	s2.display();
	student s4=s1+s2;
	s4.display();
	
	

    return 0;
}

