#include <iostream>
using namespace std;
int number(int n)
{
	if(n<=0)
	{
		return 0;
	}
	else
	{
		return n + number(n-1);
	}
}
int main()
{
	int n=5;
	
	int result=number(n);
	cout<<result<<endl;
}
