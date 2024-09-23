#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
	cin>>size;
	int *ptr = new int[size];
	for(int i=0; i<size; i++)
	{
		cout<<"ENTER THE ELEMETS OF THE ARRAY"<<endl;
		cin>>ptr[i];
	}
		for(int i=0; i<size; i++)
	{
		cout<<"output"<<endl;
		cout<<ptr[i]<<endl;
	}
	delete[] ptr;
}
