#include <iostream>
using namespace std;
struct test{
	string name;
	int test;
	int id;
	void get()
	{
		cout<<"ENTER THE NAME"<<" : "<<endl;
		cin>>name;
		cout<<"ENTER THE TEST"<<" : "<<endl;
		cin>>test;
		cout<<"ENTER THE ID"<<" : "<<endl;
		cin>>id;
	}
	void print()
	{
		cout<<"YOUR NAME IS"<<" : "<<name<<endl;
		cout<<"YOUR TEST IS"<<" : "<<test<<endl;
		cout<<"YOUR ID IS"<<" : "<<id<<endl;
	}
	
};

void func1(test t2)
{
		cout<<"ENTER THE NAME"<<" : "<<endl;
		cin>>t2.name;
		cout<<"ENTER THE TEST"<<" : "<<endl;
		cin>>t2.test;
		cout<<"ENTER THE ID"<<" : "<<endl;
		cin>>t2.id;	
}
	void func2(test t2){
		
	cout<<"YOUR NAME IS"<<" : "<<t2.name<<endl;
	cout<<"YOUR TEST IS"<<" : "<<t2.test<<endl;
	cout<<"YOUR ID IS"<<" : "<<t2.id<<endl;
}
int main()
{
	test t1,t2;
	t1.get();
	t1.print();
	func1(t2);
	func2(t2);
}
