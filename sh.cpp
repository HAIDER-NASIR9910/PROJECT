//HAIDER NASIR
//B24S0308AI088
#include <iostream>
using namespace std;
void func1(int *,int *, int *);
int main()
{
	int value1=3;
	int value2=5;
	int value3=7;
	func1(&value1,&value2,&value3);
}
void func1(int *p1,int *p2, int *p3)
{
	cout<<p1<<endl;       //store value of pointer
	cout<<p2<<endl;
	cout<<p3<<endl;
	cout<<&*p1<<endl;    //store value of pointer
	cout<<&*p2<<endl;
	cout<<&*p3<<endl;
	cout<<&p1<<endl;    //value  of the loction address save here
	cout<<&p2<<endl;
	cout<<&p3<<endl;
	cout<<*p1<<endl;   //value will be store as it is dereferancing
	cout<<*p2<<endl;
	cout<<*p3<<endl;
	cout<<*&p1<<endl;
	cout<<*&p2<<endl;
	cout<<*&p3<<endl;
	if( *p1>*p2 && *p1>*p3)
	{
		cout<<" THE VALUE *P1 is grater amongs "<<" : "<<*p1<<endl;
	}
		else if( *p2>*p1 && *p2>*p3)
	{
		cout<<" THE VALUE *P2 is grater amongs "<<" : "<<*p2<<endl;
	}
		else if( *p3>*p2 && *p3>*p2)
	{
		cout<<" THE VALUE *P3 is grater amongs "<<" : "<<*p3<<endl;
	}
}
