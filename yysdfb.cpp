#include <iostream>
using namespace std;
void create_array(int arr[2][3])
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
}
int main()
{
	int arr[2][3];
	cout<<"ARRAY 1"<<endl;
	create_array(arr);
	cout<<"ARRAY 2"<<endl;
	create_array(arr);
	cout<<"ARRAY 3"<<endl;
	create_array(arr);

}

