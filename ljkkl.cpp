#include <iostream>
using namespace std;

int main()
{
	int size;
	cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<"MAXIMUM IS"<<" : "<<max<<endl;
	cout<<"MINIMUM IS"<<" : "<<min<<endl;

    return 0;
}

