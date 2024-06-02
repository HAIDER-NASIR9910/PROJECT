#include <iostream>
using namespace std;
struct student{
	string name;
	char grade;
	int rollno;
	
};
void input(student p1[3]);
void output(student p1[3]);
int main()
{
	student p1[3];
	input(p1);
	output(p1);
}
void input(student p1[3])
{
	for(int i=0; i<3; i++)
	{
		cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
		cin>>p1[i].name;
		cout<<"ENTER THE GRADE OF THE STUDENT "<<endl;
		cin>>p1[i].grade;
		cout<<"ENTER THE ROLLNO OF THE STUDENT "<<endl;
		cin>>p1[i].rollno;
	}
}
void output(student p1[3])
{
		for(int i=0; i<3; i++)
	{
		cout<<p1[i].name<<endl;
		cout<<p1[i].grade<<endl;
		cout<<p1[i].rollno<<endl;
	}
}

