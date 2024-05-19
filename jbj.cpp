#include <iostream>
using namespace std;
void func1(int a,int b, int c)
{
	int *ptr=&a;
	int *ptr2=&b;
	int *ptr3=&c;
	cout<<ptr<<endl;
	cout<<ptr2<<endl;
	cout<<ptr3<<endl;
		cout<<*&ptr<<endl;
	cout<<*&ptr2<<endl;
	cout<<*&ptr3<<endl;
		cout<<&*ptr<<endl;
	cout<<&*ptr2<<endl;
	cout<<&*ptr3<<endl;
		cout<<*ptr<<endl;
	cout<<*ptr2<<endl;
	cout<<*ptr3<<endl;
		cout<<&ptr<<endl;
	cout<<&ptr2<<endl;
	cout<<&ptr3<<endl;
}
int main()
{
   	int a=1;
   	int b=2;
   	int c=3;
   	func1(a,b,c);
}
