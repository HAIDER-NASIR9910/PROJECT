#include <iostream>
using namespace std;

int main()
{
	int arr[3]={1,2,3};
	int *ptr=new int[3];
	for(int i=0;i<3;i++)
	{
		ptr[i]=arr[i];
	}
	for(int i=0;i<3;i++)
	{
		cout<<ptr[i]<<endl;
	}
	delete[] ptr; 

    return 0;
}
