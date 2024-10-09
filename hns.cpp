#include <iostream>
using namespace std;
int fact(int num)
{
	if(num==1)
	{
		return 1;
	}
	else
	{
	//cout<<num;
	return	fact(num-1) *num;

	}
}
int main()
{
	int num1=5;
	int result=fact(num1);
	cout<<result<<endl;
}
