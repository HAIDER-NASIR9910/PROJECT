//HAIDER NASIR
//B24S0308AI088
//AI-BLUE (OOP)
#include <iostream>
using namespace std;
class Student{
	protected:
	string name;
	int id;
	float gpa;
	public:
	Student(string nam,int i,float g):name(nam),id(i),gpa(g){}
	~Student(){}
	bool operator>(Student st2)
	{
		
	    if(st2.gpa>gpa)
	    {
	    	cout<<"ST2 GPA IS GRATER"<<endl;
	    	return true;
		}
		else
		{
			cout<<"ST1 IS GRATER"<<endl;
			return false;
		}
		
	}
	
	bool operator < (Student st2)
	{
		
	    if(st2.gpa<gpa)
	    {
	    	cout<<"ST1 GPA IS GRATER"<<endl;
	    	return true;
		}
		else
		{
			cout<<"ST2 GPA IS GRATER"<<endl;
			return false;
		}
		
	}
	void display()
	{
		cout<<"NAME IS"<<" : "<<name<<endl;
		cout<<"GPA IS"<<" : "<<gpa<<endl;
		cout<<"ID IS"<<" : "<<id<<endl;
	}
};
int main()
{
	Student st1("HAIDER",1,3.91);
	Student st2("ATTA",2,3.49);
	int choice;
	cout<<"CHECAKING ST1>ST2 PRESS KEY 1"<<endl;
	cout<<"CHECAKING ST1<ST2 PRESS KEY 2"<<endl;
	cout<<"IT WILL DISPLAY THE ONE WHOSE GPA IS GRATER/LOWER AND HIS NAME AND ID"<<endl;
	cout<<"I FOR TURE 0 FOR FALSE"<<endl;
	cin>>choice;
	bool x,y;
	switch(choice)
	{
		case 1:
		st1.display();
		x=st1>st2;
		cout<<x<<endl;
		break;
		case 2:
		st2.display();
		y=st1<st2;
		cout<<y<<endl;
		break;
	}
    return 0;
}

