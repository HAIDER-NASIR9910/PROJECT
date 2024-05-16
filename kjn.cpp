//HAIDER NASIR
//B24S0308AI088
#include <iostream>
using namespace std;
void func1(int *,int *);
int main()
{
	int  a=9;
	int b=10;
	func1(&a , &b);
}
void func1(int *p1, int *p2)

{
	cout<<"THE VALUE OF THE P1 BEFORE SWAPING "<<" : "<< *p1<<endl;
	cout<<"THE VALUE OF THE P2 BEFORE SWAPING "<<" : "<< *p2<<endl;
	int temp=*p1;
	*p1=*p2;
	cout<<"AFTER THE SWAPING THE VALUE OF *P1 BECOME "<<" : "<<*p1<<endl;
	*p2=temp;
	cout<<"AFTER THE SWAPING THE VALUE OF *P2 BECOME "<<" : "<<*p2<<endl;
}
