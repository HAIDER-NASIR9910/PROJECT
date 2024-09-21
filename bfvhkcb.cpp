#include <iostream>
using namespace std;
int main()
{
	int arr[3]={1,2,3};
	int *ptr=&arr[0];
	for(int i=0; i<3; i++)
	{
		cout<<ptr[i]<<endl;
	}
	
}
