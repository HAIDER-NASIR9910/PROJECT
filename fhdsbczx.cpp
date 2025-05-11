#include <iostream>
using namespace std;

 
void func1(int arr[10],int low,int high,int target)
{
	while(low<=high)
	{
		int mid;
		mid=(high+low)/2;
	    if(arr[mid]==target)
	    {
	    	cout<<"FOUND THE TARGET"<<" : "<<mid;
	    	return;
		}
		else if(arr[mid]>target)
		{
			high=mid-1;
		}
		else if(arr[mid]<target)
		{
			low=mid+1;
		}
		else{
		cout<<"NOT FOUND"<<endl;
	}
}
}
int main()
{
	
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int target;
	cout<<"ENTER THE TARGET"<<endl;
	cin>>target;
	func1(arr,0,9,target);

    return 0;
}

