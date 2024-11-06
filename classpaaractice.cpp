#include <iostream>
using namespace std;
class student{
	private:
	string name;
	int id;
	float gpa;
	public:
	student(string n,int i,float g)
	{
		name=n;
		id=i;
		gpa=g;
	}
	student getname(string n)
	{
		name=n;
		return *this;
	}
	student getid(int i)
	{
		id=i;
		return *this;
	}
	student getgpa(int g)
	{
		gpa=g;
		return *this;
	}
	
	void print()
	{
		cout<<"NAME IS"<<" : "<<name<<endl;
		cout<<"ID IS"<<" : "<<id<<endl;
		cout<<"GPA IS"<<" : "<<gpa<<endl;	
	}
};
int main()
{
	student st1("HAIDER",1,3.91);
	st1.print();
	st1.getname("haider").getid(2).getgpa(3.91);
	st1.print();
    return 0;
}

