#include <iostream>
using namespace std;
int main()
{
	int arr[2][3][3];
	for(int i=0; i<2;  i++)
	{
		for(int j=0; j<3; j++)
		{
			for(int k=0; k<3; k++)
			{
				cin>>arr[i][j][k];
			}
		}
	}
	
	
		for(int i=0; i<2;  i++)
	{
		for(int j=0; j<3; j++)
		{
			for(int k=0; k<3; k++)
			{
				cout<<arr[i][j][k]<<"   ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
	
		
	
		for(int j=0; j<3; j++)
		{
			for(int k=0; k<3; k++)
			{
			arr[0][j][k]+=arr[1][j][k];
			cout<<arr[0][j][k]<<"  ";
			}
			cout<<endl;
		}

	
	
	
}
