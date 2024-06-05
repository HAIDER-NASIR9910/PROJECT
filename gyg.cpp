#include <iostream>
using namespace std;
int main()
{
	int arr[3][3];
	bool 	identity =true;
	cout<<"ENTER THE MATRIX ELEMENTS "<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"PRINTING THE MATRIX "<<endl;
		for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(i==j && arr[i][j]!=1)
			{
					identity =0;
			}
			else if(i!=j && arr[i][j]!=0)
			{
				identity =0;
			}
		}
	}
	if (	identity)
	{
		cout<<"THIS IS IDENTITY"<<endl;
	}
	else 
	{
		cout<<"ITS NOT "<<endl;
	}
	
	
}
