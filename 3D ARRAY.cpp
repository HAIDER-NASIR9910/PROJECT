#include <iostream>
using namespace std;
int main()
{
	int arr[2][3][3];
	for(int i=0; i<2; i++)
	{
		for(int k=0; k<3; k++)
		{
			for(int j=0; j<3; j++)
			{
				cin>>arr[i][k][j];
			}
		}
	}
	
		for(int i=0; i<2; i++)
	{
		for(int k=0; k<3; k++)
		{
			for(int j=0; j<3; j++)
			{
				cout<<arr[i][k][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
	
			for(int i=0; i<2; i++)
	{
		for(int k=0; k<3; k++)
		{
		
			for(int j=0; j<3; j++)
			{
				cout<<arr[i][k][j]<<"  ";
			}
			cout<<endl;
		}

		cout<<endl;
	}
	
	cout<<"SUM OF MATRIX--------------- "<<endl;

		for(int k=0; k<3; k++)
		{
			for(int j=0; j<3; j++)
			{
			     arr[0][k][j]+=arr[1][k][j];
			     cout<<arr[0][k][j]<<"    ";
			}
			cout<<endl;
		}

	
}
