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
	cout<<"YOUR ARRAY IS IN THIS "<<endl;
		for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}		
	int sumofcoloum[3]={0};
		for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
		 sumofcoloum[j]+=arr[i][j];
	    	 cout<< sumofcoloum[j]<<endl;
		}
		cout<<endl;
		
	}		
	for(int j=0; j<3; j++)
	{
		cout<<"SUM OF THE EACH COLOUM " << " : " << j+1 <<sumofcoloum[j]<<endl;
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			int *ptr=&arr[i][j];
			cout<<ptr<<"   ";
		}
		cout<<endl;
	}
	
}
