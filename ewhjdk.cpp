//GPA QUESTION FOR CHECKING WHOSE HAVE HIGHTEST THROUGH THE ARRAY
//WITH OPERATOR OVERLOADING
//ambuity removal by the use of virtual classes and the display function in order to avoid ambaguity
#include <iostream>
using namespace std;
class person{
	protected:
	string height;
	public:
	person(){}
	person(string h)
	{
		height=h;
	}
};
class student:virtual public person{
	protected:
	string name;
	int gpa;
	public:
	student(){}
	student(string nam,int g,string h):person(h)
	{
		name=nam;
		gpa=g;
	}
	//friend void operator<(student st1,student st2);
	void print()
	{
		cout<<"name"<<name<<endl;
		cout<<"gpa"<<gpa<<endl;
	}
};


class child:virtual public person{
	protected:
	int year;
	public:
	child(){}
	child(string h,int y):person(h),year(y){}
	
};
class teen:public child,public student{
	protected:
	int age;
	public:
	teen(int y,string nam,int g,int a):child(y),student(nam,g){
	age=a;
	}
	
	
};
int main()
{



	
	

    return 0;
}

