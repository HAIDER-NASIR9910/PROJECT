#include <iostream>
using namespace std;
void func1( static int balance, static int amount)
{
	static int balance;
	static int amount;
	cout<<balance<<endl;
	cout<<balance<<endl;
	balance=22;
	amount=23;
}
int main()
{
	int a=2;
	int b=3;
	func1(a,b);
	func1(a,b);
}
