#include <iostream>
using namespace std;
void func1(int arr[][3],int rows, int coloums)
{
	cout<<"ENTER THE ELEMENTS OF THE ARRAY "<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<coloums; j++)
		{
			cin>>arr[i][j];
		}
	}
}
void func2(int arr[][3],int rows, int coloums)
{
	cout<<"PRINTING THE ELEMENTS OF THE ARRAY -----------"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<coloums; j++)
		{
			cout<<arr[i][j];
		}
	}
}
int main()
{
	int rows=3;
	int coloums=3;
	int matrix[rows][coloums];	
	func1(matrix, rows,  coloums);
	func2(matrix, rows,  coloums)
}
