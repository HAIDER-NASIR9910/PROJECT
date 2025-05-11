#include <iostream>
using namespace std;
void Binary_search(int high,int low,int arr[],int target)
{
	int mid;
	while(low<=high)
	{
	 mid=(high+low) / 2;
	 if(arr[mid]==target)
	 {
	 	cout<<"FIND AT THE INDEX"<<" : "<<mid;
	 	return;
	 }
	 else if(arr[mid]>target)
	 {
	 	high=mid-1;
	 }
	 else
	 {
	 	low=mid+1;
	 }
	}	
	
}

int main()
{
	int arr[10]={10,9,8,7,6,5,4,3,2,1};
	int temp=0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int swapnumber = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swapnumber;
            }
        }
    }

	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	int target;
	cout<<"\n ENTER THE VALUE TO SEARCH"<<endl;
	cin>>target;
	Binary_search(0,9,arr,target);
	
    return 0;
}

