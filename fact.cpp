#include <iostream>
using namespace std;
int number(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return number(n-1)*n;
	}
}
int main()
{
	int result=number(4);
	cout<<result<<endl;
}
