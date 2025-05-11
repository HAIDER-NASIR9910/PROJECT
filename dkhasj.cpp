#include <iostream>
using namespace std;
void print(int arr1[2][3])
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr1[i][j]<<"   ";
		}
		cout<<endl;
	}	
}
int main()
{
	int arr[2][3];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"VALUES IN ARRAY1 BY ROW ARE"<<endl;
	print(arr);
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"VALUES IN ARRAY2 BY ROW ARE"<<endl;
	print(arr);
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"VALUES IN ARRAY3 BY ROW ARE"<<endl;
	print(arr);

	
	

    return 0;
}

