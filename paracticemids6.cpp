#include <iostream>
using namespace std;
int func(int x,int y)
{
	if(x%y==0)
	{
		return y;
	}
	else
	{
		return(y,x%y);
	}
}
int main()
{
	int result=func(10,2);
	cout<<result;

    return 0;
}

