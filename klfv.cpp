#include <iostream>
using namespace std;
int gcd(int x, int y)
{
	if(x%y==0)
	{
		return y;
	}
	else 
	{
		return (y,x%y);
	}
}
int main()
{
	int result=gcd(3,3);
	cout<<result;
}
