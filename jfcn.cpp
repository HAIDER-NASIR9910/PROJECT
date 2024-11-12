#include <iostream>
using namespace std;
class teacher{
	protected:
	string name;
	string course;
	int id;
	public:
	teacher(){
	}
	teacher(string na, string co)
	{
		name=na;
		course=co;
	}
	string getname(string na)
	{
		name=na;
		return name;
	}
	string getcourse()
	{
		return course;
	}
	void setdata(string na, string co)
	{
		name=na;
		course=co;		
	}
	void print1()
	{
		cout<<"YOUR NAME IS"<<" : "<<name<<endl;
		cout<<"YOUR COURSE IS"<<" : "<<course<<endl;
	}	
};
class student : protected teacher{
	private:
	string student_name;
	string course2;
	public:
	student(string na, string co): teacher(na, co)
	{
		student_name=na;
		course2=co;
	}
	void assign_teacher()
	{
		if(course==course2)
		{
			cout<<"YOUR ASSIGN TEACHER IS"<<" : "<<name<<endl;
			cout<<"YOUR COURSE IS"<<" : "<<course<<endl;
		}
		else
		{
			cout<<"WE DON'T OFFER THIS COURSE RIGHT KNOW"<<endl;
		}
	}
	void print()
	{
		cout<<"YOUR NAME IS"<<" : "<<student_name<<endl;
		cout<<"YOUR COURSE IS"<<" : "<<course2<<endl;
	}	
};
int main()
{
	teacher t1("HAIDER","CALCULUS");
	t1.print1();
	student s1("umer","CALCULUS");
	s1.print();
	s1.assign_teacher();
    return 0;
}

