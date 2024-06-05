#include <iostream>
using namespace std;
struct student{
	string name;
	int age;
	int rollno;	
};
void func1(student a1[3]);
void func2(student a1[3]);
int main()
{
	student a1[3];
	func1(a1);
	func2(a1);
}
void func1(student a1[3])
{
	for(int i=0; i<3; i++)
	{
		cin>>a1[i].name;
		cin>>a1[i].age;
		cin>>a1[i].rollno;
	}
}

void func2( student a1[3])
{
	for(int i=0; i<3; i++)
	{
		cout<<a1[i].name<<endl;;
		cout<<a1[i].age<<endl;
		cout<<a1[i].rollno<<endl;
	}
}

