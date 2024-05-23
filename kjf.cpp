#include <iostream>
using namespace std;
struct student{
	string name;
	int age;
	char grade;
	void printstudent()
	{
		cout<<"NAME OF THE STUDENT IS "<<" : "<<name<<endl;
		cout<<"AGE OF THE STUDENT IS "<<" : "<<age<<endl;
		cout<<"GARDE OF THE STUDENT IS"<<" : "<<grade<<endl;
	}
};
int main()
{
	student studentS;
	studentS.age=18;
	studentS.name="FUZAIL";
	studentS.grade='A';
    studentS.printstudent();
    student S2;
    S2.age=18;
    S2.name="HAIDER";
    S2.grade='A';
	S2.printstudent();
}
