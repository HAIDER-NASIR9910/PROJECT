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
		cout<<endl;
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
	
	int *ptr=&arr[0][0];
	cout<<*ptr<<endl;
	cout<<++ *ptr<<endl;
	cout<<*ptr+1<<endl;
	//now for the array on row and going ahead 
	int ptr1=&arr[3];
	cout<<*ptr<<endl;
	cout<<++ *ptr<<endl;
	cout<<*ptr+1<<endl;
	
}
