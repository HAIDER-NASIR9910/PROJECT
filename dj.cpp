#include <iostream>
using namespace std;
int main()
{
	int arr[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<"enter the element no "<<"  :  " <<j+1<<endl;
			cin>>arr[i][j];
		}
	}
	cout<<"printing the array---------------------- "<<endl;
		for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	int a[3][3];
	int odd=2;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			a[i][j] = odd;
			odd=odd+2;
			cout<<odd<<endl;
		}
	}
	cout<<"even------------"<<endl;
	int array[3][3];
	int even=1;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			array[i][j] = even;
			even=even+2;
			cout<<even<<endl;
		}
	}
	
}
