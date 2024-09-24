#include <iostream>
using namespace std;
void func1(int *ptr)
{
	for(int i=0; i<5; i++)
	{
		cin>>ptr[i];
	}
}
int main()
{
	int arr[5]={1,2,3,4,5};
	func1(arr);
	cout<<"UPDATED"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<endl;
	}
}
