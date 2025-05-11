#include <iostream>
using namespace std;
int hash_func(int a)
{
	return a%5;
}
void print(int arr[])
{
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int v1=50;
	int v2=25;
	int arr[5]={};
	int arr2[5]={};
	int idx=hash_func(v1);
	int idx1=hash_func(v2);
	if(arr[idx]==NULL)
	{
		arr[idx]=v1;
	if(arr[idx]!=NULL)
	{
		arr2[idx1]=v2;
	}
	}
	
	print(arr);
	cout<<endl;
	print(arr2);
	

    return 0;
}

