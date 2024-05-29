#include <iostream>
using namespace std;
void func1()
{
	static  int a=2;
	cout<<a<<endl;
	a++;
	a=99;
}
int main()
{
	func1();
	func1();
}
