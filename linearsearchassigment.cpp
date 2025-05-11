#include <iostream>
using namespace std;
void liner_search(int arr[7],int key)
{
	for(int i=0;i<7;i++)
	{
		if(arr[i]==key)
		{
			cout<<"FOUND AT POSITION  "<< i+1<<" : "<<arr[i]<<endl;
		}
	}
	
}
int main()
{
	int arra[7]={1,2,3,4,11,15,17};
	liner_search(arra,17);
	
	

    return 0;
}

