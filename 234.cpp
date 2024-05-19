#include <iostream>
using namespace std;
int main()
{
	int arr[3][3];
	cout<<"ENTER THE IDENTITY MATRIX "<<endl;
		for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"YOUR ARRAY  IDENTITY ARRAY IS THIS "<<endl;
		for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
	cout<<"-----------------"<<endl;
	int arry[3][3]={1,2,3,4,5,6,7,8,9};
			for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<arry[i][j]<<"  ";
			if(arr[i][j]*arry[i][j]==arry[i][j])
			{
				cout<<"IT IS IDENTITY MATRIX "<<endl;
				break;
			}
			else
			{
				cout<<"THE MATRIX YOU ENTERED IS NOT IDENTITY MATRIX "<<endl;
				break;
			}
		}
		cout<<endl;
	}		
	
	
}
