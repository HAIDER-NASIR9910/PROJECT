#include <iostream>
using namespace std;

int main()
{
	int arr[3]={1,2,3};
	int *ptr= new int[3];
	for(int i=0;i<3;i++)
	{
		ptr[i]=arr[i];
	}
	
	cout<<*ptr++;
	cout<<endl;
	cout<<*ptr+3;
	cout<<endl;



    return 0;
}

