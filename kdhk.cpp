#include <iostream>
using namespace std;
void func1(int a[][3],int r, int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
}
void func2(int a[][3],int r, int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[i][j]<<"   ";
		}
		cout<<endl;
	}
}
int main()
{
	const int r=3;
	const int c=3;
	int matrix[r][c];
	func1(matrix,r,c);
	func2(matrix,r,c);
}
