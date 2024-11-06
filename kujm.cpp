#include <iostream>
using namespace std;
struct A{
	string name;
	int id;
	int gpa;
	string section;
};
int main()
{
	A a1;
	A *ptr=new A(a1);
	cin>>ptr->id;
	cin>>ptr->gpa;
	cin.ignore();
	getline(cin,ptr->section);
	//cin.ignore();
	getline(cin,ptr->name);
	

    return 0;
}

