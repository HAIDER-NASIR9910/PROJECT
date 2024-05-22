#include <iostream>
using namespace std;
void func1()
{
	static int a;
	cout<<a<<endl;
	a++;
}
int main()
{
	func1();
	func1();
	func1();
}
