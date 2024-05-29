#include <iostream>
using namespace std;
int main()
{
	int arr[3][3];
	bool istrue=true;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3; j++)
		{
			cout<<"ENTER THE ELEMENTS OF THE ARRAY "<<endl;
			cin>>arr[i][j];
		}
	}
	
	cout<<"OUTPUT OF THE ARRAY IS ---------------"<<endl;
    	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3; j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	int sum=0;
	  	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3; j++)
		{
			sum+=arr[i][j];
		}
	}
	cout<<"TOTAL SUM OF THE ARRAY IS"<<" : "<<sum<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j && arr[i][j]==1)
			{
				istrue=0;
			}
			else if(i!=j && arr[i][j]!=1)
			{
				istrue=0;
			}
		}
	}
	if(istrue)
	{
		cout<<"THE ARRAY YOU ENTERED IS AN ARRAY "<<endl;
	}
	else
	{
		cout<<"THE ARRAY YOU ENTERED IS NOT AN ARRAY "<<endl;
	}
	
	

}
