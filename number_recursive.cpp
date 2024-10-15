#include <iostream>
using namespace std;
void number(int num)
{
	if(num<=0)
	{
		return;
	}
	else
	{
		cout<<num<<endl;
		return number(num-1);
	}
}
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	number(n);
}
