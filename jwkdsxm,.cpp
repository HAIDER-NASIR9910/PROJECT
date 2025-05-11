#include <iostream>
using namespace std;

int main()
{
	int arr[3]={1,2,3};
	int *ptr=new int[3];
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<3;i++)
	{
		ptr[i]=arr[i];
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

