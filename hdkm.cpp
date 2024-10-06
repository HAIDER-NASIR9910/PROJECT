#include <iostream>
using namespace std;
struct student{
	string name;
	string rollno;
	string classname;
};
int main()
{
	student s;
	cout<<"ENTER THE NAME OF CLASS"<<endl;
	cin>>s.classname;
	cout<<"ENTER YOURS NAME"<<endl;
	cin>>s.name;
	cout<<"ENTER THE ROLLNO"<<endl;
	cin>>s.rollno;
}
