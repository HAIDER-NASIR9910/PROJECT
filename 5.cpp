#include <iostream>
using namespace std;
void func1(int size, int arr[][3])
{
	for(int i=0; i<3; i++)
	{
		for(int i=0; i<3; i++)
		{
			cin>>arr[i][j]<<endl;
		}
	}
}
void print(int size, int arr[][3] );
int main()
{
	int r=3;
	int matrix[r][r];
	func1(r,matrix);
	print();
}
void print(int size, int arr[][3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
}
