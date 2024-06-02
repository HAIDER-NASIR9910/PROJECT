#include <iostream>
using namespace std;
struct student{
	string name;
	int rollno;
	float gpa;
	void display()
	{
		cout<<"THE NAME OF THE STUDENT IS"<<" : "<<endl;
		cout<<name<<endl;
		cout<<"ROLL NO OF THE STUDENT IS "<<" : "<<endl;
		cout<<rollno<<endl;
		cout<<"GPA OF THE STUDENT IS "<<" : " <<endl;
		cout<<gpa<<endl;
	}
};
int main()
{
	student p1[3];
	for(int i=0; i<3; i++)
	{
		cin>>p1[i].name;
		cin>>p1[i].rollno;
		cin>>p1[i].gpa;
	
	}
	   for(int i = 0; i < 3; i++) {
        p1[i].display();
        cout << endl;
    }
}
