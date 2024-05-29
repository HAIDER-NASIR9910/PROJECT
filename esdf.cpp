#include <iostream>
using namespace std;
int fun1(float balance,float amount)
{
	cout<<balance<<endl;
	cout<<amount<<endl;
	return balance+amount;
}
int func2(float *balane,float *amount)
{
	cout<< *balane<<endl;
	cout<<*amount<<endl;
	return *balane+*amount;
}
int main()
{
  float a=9.4;
  float b=9.5;
  int c=fun1(a,b);
  int d=func2(&a,&b);
}
