#include <iostream>
using namespace std;

int main()
{

	int arr[10];
	int size;
	cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int x;
	cout<<"ENTER THE VALUE TO PUT IT IN FIRST PLACE"<<endl;
	cin>>x;
	for(int i=size ; i>0 ;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=x;
	size++;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	

    return 0;
}

