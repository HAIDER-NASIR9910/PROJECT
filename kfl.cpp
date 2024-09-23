#include <iostream>
using namespace std;
int main()
{
	int *ptr0= new int[3];
	int *ptr1=new int[3];
	int *ptr2=new int[3];
	ptr0[0]=1;
	ptr0[1]=1;
	ptr0[2]=1;
	for(int i=0; i<3; i++)
	{
		cout<<ptr0[i];
	}
	cout<<endl;
	ptr1[0]=1;
	ptr1[1]=1;
	ptr1[2]=1;
		for(int i=0; i<3; i++)
	{
		cout<<ptr1[i];
	}
	ptr2[0]=1;
	ptr2[1]=1;
	ptr2[2]=1;
	cout<<endl;
		for(int i=0; i<3; i++)
	{
		cout<<ptr2[i];
	}
	delete[] ptr0;
	delete[] ptr1;	
	delete[] ptr2;	
}
