//dynamically creating an array
#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"ENTER THE ROWS"<<endl;
	cin>>rows;
	int *arr=new int[rows];    //dynamically creating an array
	for(int i=0;i<rows;i++)    // input of elements in the array using loop
	{
		cout<<"ENTER THE ELEMENTS OF ARRAY"<<endl;
		cin>>arr[i];
	}
	cout<<"PRINTING THE ARRAY"<<endl;
	for(int i=0;i<rows;i++)  //printing of array using of array
	{
		cout<<arr[i]<<" ";
	}
	

    return 0;
}

