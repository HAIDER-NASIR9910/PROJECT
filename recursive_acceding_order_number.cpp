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
		number(num-1);
		cout<<num<<endl;
	}
	
}
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	number(n);
}
