#include <iostream>
using namespace std;
struct student{
	string name;
	string section;
	int id;
};
struct teacher{
	string teacher_name;
	string course;
	int id;
	student s1;
};
int main()
{
	teacher t1;
	cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
	getline(cin,t1.s1.name);
	cout<<"ENTER THE ID"<<endl;
	cin>>t1.s1.id;
	cout<<"ENTER THE SECTION OF THE STUDENT"<<endl;
	cin.ignore();
	getline(cin,t1.s1.section);
	cout<<"ENTER THE NAME OF THE STUDENT"<<endl;

    return 0;
}

