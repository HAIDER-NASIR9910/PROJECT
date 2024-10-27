#include <iostream>
using namespace std;

int main()
{
	int arr[5]={1,2,3,4,5};
	int *ptr=new int[5];
	for(int i=0; i<5;i++)
	{
		ptr[i]=arr[i];
	}
	for(int i=0;i<5; i++)
	{
		cout<<ptr[i]<<endl;
	}
	delete[] ptr;

    return 0;
}

