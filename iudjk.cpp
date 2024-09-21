#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter the size of the array"<<endl;
	cin>>size;
		int size2;
	cout<<"enter the size of the array"<<endl;
	cin>>size2;
	int *ptr= new int[size][size2];
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size2; j++)
		{
			cin>>ptr[i][j]<<"   ";
		}
		//cout<<endl;
	}
		for(int i=0; i<size; i++)
	{
		for(int j=0; j<size2; j++)
		{
			cout<<ptr[i][j]<<"   ";
		}
		cout<<endl;
	}
}
