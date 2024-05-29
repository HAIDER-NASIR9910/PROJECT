#include <iostream>
using namespace std;
void func1(int *ptr)
{
	cout<<*ptr<<endl;
	*ptr=3;
}
int main()
{
	int a=4;
	func1(&a);
	cout<<a<<endl;
}
