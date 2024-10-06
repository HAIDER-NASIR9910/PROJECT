#include <iostream>
using namespace std;
struct A{
	int rollno;
	string name;
}s1,s2;
int main()
{
	cout<<"enter the name"<<endl;
	getline(cin,s1.name);
	cout<<"enter the  rollno"<<endl;
	cin>>s1.rollno;
	cin.ignore();
	cout<<"enter the name"<<endl;
	getline(cin,s2.name);
	cout<<"enter the  rollno"<<endl;
	cin>>s2.rollno;
}
