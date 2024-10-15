#include <iostream>
using namespace std;
int main()
{
	int arr[9]={1,2,3,4,5,6,7,8,9};
	int *ptr= new int[9];
	for(int i=0;i<9;i++)
	{
		ptr[i]=arr[i];
	}
	for(int i=0; i<9; i++)
	{
		cout<<*ptr<<endl;
	}
}
