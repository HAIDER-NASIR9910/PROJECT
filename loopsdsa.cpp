#include <iostream>
using namespace std;

int main()
{
	int arr[3]={10,20,30};
	int arr1[3];
	for(int i=0;i<3;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	cout<<"ENTER THE ARRAY"<<" : "<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<3;i++)
	{
		cout<<arr1[i]<<endl;
	}
	int i=0;
	do{
		cin>>arr[i];
		i++;
	}while(i<3);
	int j=0;
	while(j<3){
		cin>>arr[j];
		j++;
	}



    return 0;
}

