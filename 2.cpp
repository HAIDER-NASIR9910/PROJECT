#include <iostream>
using namespace std;
void func1(int a);
int main()
{
	int a=9;
	func1(a);

}
void func1(int a)
{
	int *ptr=&a;
	cout<<*ptr<<endl;
	cout<<&*ptr<<endl;
	cout<<*&ptr<<endl;
	cout<<ptr<<endl;
	cout<<&ptr<<endl;
}
