#include <iostream>
using namespace std;
int main()
{
	for(int i=0; i<3; i++)
	{
		
			cout<<"* ";
			cout<<"            *";
			cout<<endl;
	}
	cout<<"--------------------------------- "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=3-i;j>0;j--)
		{
			cout<<"  ";
		}
		for(int k=0; k<=i; k++)
		{
			cout<<"*"<<endl;
		}
		cout<<endl;
	}
	cout<<"-------------------------"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<"            *";
			cout<<endl;
		}
		cout<<endl;
	}
}
