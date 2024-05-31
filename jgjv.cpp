#include <iostream>
using namespace std;
void func1(int *p1,int *p2)
{
	cout<<*p1+*p2<<endl;
	*p1=3;
	*p2=3;
}
int main()
{
	int a=4;
	int b=4;
	func1(&a,&b);
	cout<<a+b<<endl;
}
