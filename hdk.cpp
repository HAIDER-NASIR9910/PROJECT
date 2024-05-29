#include <iostream>
#include <algorithm>
using namespace std;
int func1(int arr[],int size, int k)
{
	
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<"   ";
		}
		k=arr[3];
			for(int i=0;i<size;i++)
		{
			if(arr[i]>k)
			{
				k=arr[i];
			
				cout<<k<<endl;
			}
		}
	
}
int main()
{
	int arr[]={22,3,9,17,34,156,203,123,6,4};
	int size=10;
	sort(arr,arr+size);


	int c= func1(arr,10, 0);
	cout<<c;

}
