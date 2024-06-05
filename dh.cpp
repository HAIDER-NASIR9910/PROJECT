#include <iostream>
using namespace std;
int main()
{
	int arr[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>arr[i][j];
		}
	}
	
		for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
	
	int max=arr[0][0];
	int min=arr[0][0];
	int sum=0;
	
		for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(arr[i][j]>arr[0][0])
			{
				max=arr[i][j];
			}
			else if(arr[i][j]<min)
			{
				min=arr[i][j];
			}
			sum+=arr[i][j];
		}
	}
	
	cout<<"MAXIMUM VALUE IS "<<" : "<<max<<endl;
	cout<<"MINIMUM VAKUE IS "<<" : "<<min<<endl;
	cout<<"SUM OF THE ARRAY IS"<<" : "<<sum<<endl;
	
}
