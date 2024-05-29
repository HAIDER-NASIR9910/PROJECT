#include <iostream>
using namespace std;
int func1(int arr[],int size, int k)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"   ";
	}
}


int kthlargest(int arr[],int size)
{
	
	int k=arr[3];
	for(int i=0; i<size; i++)
	{
		if(arr[i]>=arr[3])
		{
			cout<<arr[i]<<endl;
		}
		
	}
	
}

int main()
{
	int arr[]={22,3,9,17,34,156,203,123,6,4};
	int k=0;
	int c=func1(arr,10,k);
	cout<<c;
	int a=kthlargest(arr,10);
	cout<<a;
}
