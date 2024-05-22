#include <iostream>
using namespace std;
void func1(int a,int b)
{
	int *ptr=&a;
	int *ptr1=&b;
		cout<<ptr<<endl;
		cout<<ptr1<<endl;
	cout<<*&ptr<<endl;
		cout<<*&ptr1<<endl;
	cout<<&*ptr<<endl;
		cout<<&*ptr1<<endl;
	cout<<&ptr<<endl;
		cout<<&ptr1<<endl;
	cout<<*ptr<<endl;
		cout<<*ptr1<<endl;
}
int main()
{
	func1(3,4);
}
