#include <iostream>
using namespace std;
int main()
{
	int arr[3][3];
	int isidentity=true;
	for(int i=0;i<3; i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"ENTER THE ELEMENTS OF THE ARRAY"<<endl;
			cin>>arr[i][j];
		}
	}
		for(int i=0;i<3; i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j && arr[i][j]!=1)
			{
				isidentity=0;
			}
			else if(i!=j && arr[i][j]!=1)
			{
				isidentity=0;
			}
		}
	}
	if(isidentity)
	{
		cout<<"THIS IS AN IDENTITY MATRIX"<<endl;
	}
	else
	{
		cout<<"THIS IS NOT IDENTITY MATRIX"<<endl;
	}
}
