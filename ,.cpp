#include <iostream>
using namespace std;
void func1(int *ptr)
{
	cout<<*ptr<<endl;
	*ptr=20;
}
int main()
{
	int a=10;
	func1(&a);
     cout<<a<<endl;
}
