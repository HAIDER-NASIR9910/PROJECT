#include <iostream>
using namespace std;
int factorial(int num)
{
	if(num==1)
	{
		return 1;
	}
	else
	{
		return num*factorial(num-1);
	}
}
int main()
{
	int num;
	cout<<"enter the num"<<endl;
	cin>>num;
	cout<<factorial(num);

    return 0;
}

