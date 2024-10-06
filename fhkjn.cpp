#include <iostream>
using namespace std;
int  gcd(int n1, int n2)
{
	if(n1%n2==0)
	{
		return n2;
	}
	else
	{
		return gcd(n2,n1%n2);
	}
}
int main()
{
    int result=	gcd(78,66);
	cout<<result<<endl;
}
