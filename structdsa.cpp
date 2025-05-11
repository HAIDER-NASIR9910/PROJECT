#include <iostream>
using namespace std;
struct A{
	string name;
	int RollNo;
	float gpa;
	
};
int main()
{
	A a1;
	cout<<"ENTER THE NAME"<<" : "<<endl;
	getline(cin,a1.name);
	cout<<"ENTER THE ROLLNO"<<": "<<endl;
	cin>>a1.RollNo;
	cout<<"ENTER THE GPA"<<" : "<<endl;
	cin>>a1.gpa;
	

    return 0;
}

