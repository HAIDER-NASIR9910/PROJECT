#include <iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int* *ptr= new int*[3];
	for(int i=0; i<3; i++)
	{
		ptr[i]=new int[4];
	}
	for(int i=0;i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			cin>>ptr[i][j];
		}
	}
		for(int i=0;i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<ptr[i][j]<<"  ";
		}
		cout<<endl;
	}
	for(int i=0; i<3;  i++)
	{
		delete ptr[i];
	}
	delete[] ptr;
}
