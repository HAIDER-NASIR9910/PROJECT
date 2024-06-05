#include <iostream>
using namespace std;
int func1(int balance, int add)
{
	cout<<"THE BALANCE IS "<<balance<<endl;
	cout<<"THE ADDA IS "<<add<<endl;
	return balance+add;
}
int func2(int *balance, int *add)
{
	cout<<"THE BALANCE IS "<<*balance<<endl;
	cout<<"THE ADDA IS "<<*add<<endl;
	return *balance+*add;
}
int main()
{
	int x;
	x=func1(2,3);
	int a=9;
	int b=8;
	
	x=func2(&a,&b);
}
