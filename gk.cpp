#include <iostream>
using namespace std;
void func1(int *ptr, int *ptr1)
{
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
	int a=3;
	int b=4;
	func1(&a,&b);
}
