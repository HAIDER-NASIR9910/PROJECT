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
	
	for(int i=0;i<5;i++)
	{
		func1();
	}
	func1();
	func1();
	
}
