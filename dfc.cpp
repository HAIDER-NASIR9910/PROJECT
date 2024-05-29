#include <iostream>
using namespace std;
void func1()
{
	static int a=9;
	cout<<a<<endl;
	a=5;
}
int main()
{
	func1();
	func1();}
	
