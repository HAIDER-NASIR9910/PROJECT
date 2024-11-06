#include <iostream>
using namespace std;
void printptr(int *ptr1,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<ptr1[i]<<"  "<<endl;
	}
}
int main()
{
	int size;
	cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
	cin>>size;
	int *ptr=new int[size];
	cout<<"ENTER THE ELEMENTS OF THE ARRAY"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	cout<<"PRINTING THE ARRAY"<<endl;
	
	printptr(ptr,size);
	

    return 0;
}

