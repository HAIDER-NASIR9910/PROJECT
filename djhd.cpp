#include <iostream>
using namespace std;
void func1(int *a)
{
	cout<<*a<<endl;
	*a=90;
}
int main()
{
	int a=5;
	func1(&a);
	func1(&a);
	
}
