#include <iostream>
using namespace std;
int main()
{
	int arr[4][4];
	bool isidentity=true;
	cout<<"ENTER THE IDENTITY MATRIX "<<endl;
		for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<"ELEMENT"<<" : "<< j+1<<endl;
			cin>>arr[i][j];
		}
	}
	cout<<"YOUR ARRAY  IDENTITY ARRAY IS THIS "<<endl;
		for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
	cout<<"-----------------"<<endl;
	for(int i=0;i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(i==j && arr[i][j]==1)
			{
				isidentity=0;
				break;
			}
			else if(i!=j && arr[i][j]!=1)
			{
				isidentity=0;
				break;
			}
		}
	}
	if(isidentity)
	{
		cout<<"THE MATRIX YOU ENTER IS IDENTITY"<<endl;
	}
	else
	{
		cout<<"THE MATRUX YOU ENTER IS NOT IDENTITY"<<endl;
	}
	return 0;
}
