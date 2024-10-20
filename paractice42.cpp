#include <iostream>
using namespace std;
int factorial(int f)
{
	if(f==1)
	{
		return 1;
	}
	else if(f==0)
	{
		return 1;
	}
	else
	{
		return factorial(f-1)*f;
	}
}
int main()
{
	int fact;
	cout<<"ENTER THE NUMBER TO DO FACTORIAL"<<endl;
	cin>>fact;
	int x=factorial(fact);
	cout<<x<<endl;

    return 0;
}

