#include <iostream>
using namespace std;
int main()
{
	int arr[9]={1,2,3,4,5,6,7,8,9};
	int a[3][3]={12,13,14,15,16,17,18,19,20};
	for(int i=0; i<3;i++)
	{
		cout<<arr[i]<<"   ";
		for(int j=0; j<3; j++)
	{
		cout<<" | "<<a[i][j]<<" | "<<"    ";
	}
	cout<<endl;
	}
	int sumofrows[3]={0};
	for(int i=0;i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			sumofrows[i]+=a[i][j];
		}
	}
	for(int i=0; i<3; i++)
	{
		cout<<"sum of the rows "<< i+1 <<" : "<<sumofrows[i]<<endl;
	}
	int sumofcoloum[3]={0};
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			sumofcoloum[j]+=a[i][j];
		}
	}
	for(int j=0; j<3; j++)
	{
		cout<<"THE SUM OF THE COLOUM "<<j+1<<" : "<<sumofcoloum[j]<<endl;
	}
	int sum=0;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			sum+=a[i][j];
		}
	}
	cout<<"THE SUM OF ARRAY IS "<<" : "<<sum<<endl;
	int max=a[0][0];
	int min=a[0][0];
	for(int i=0; i<3;i++)
	{
		for(int j=0; j<3; j++)
		{
		if(a[i][j]>max)
		{
			max=a[i][j];
			}	
		else if(a[i][j]<min)
		{
			min=a[i][j];
		}
		}
	}
	cout<<"THE MAX VALUE IN THE ARRAY IS "<<" : "<<max<<endl;
	cout<<"THE MIN VALUE IN THE ARRAY IS "<<" : "<<min<<endl;
	
}
	
