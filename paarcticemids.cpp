#include <iostream>
using namespace std;
void func1(char arr[20],int index=0)
{
	if(arr[index]=='\0')
	{
		return;
	}
	else
	{
		cout<<arr[index]<<endl;
		return func1(arr,index+1);
	}
}
int main()
{
	char arr1[20]="HAIDER NASIR";
	func1(arr1,0);

    return 0;
}

