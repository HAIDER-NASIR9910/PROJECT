#include <iostream>
using namespace std;
int main()
{
	for(int i=9; i>0; i++)
	{
		for(int j=0; j=9-i; j--)
		{
			cout<<" ";
		}
		for(int k=i;k>0; k++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
}
