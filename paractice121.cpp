#include <iostream>
using namespace std;
int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int num;
	cout<<"ENTER THE NUMBER"<<endl;
	cin>>num;
	cout<<fact(num);

    return 0;
}

