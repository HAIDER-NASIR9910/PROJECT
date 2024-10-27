#include <iostream>
using namespace std;
void func(char arr[],int index=0)
{
	if(arr[index]=='\0')
	{
		return ;
	}
	else 
	{
		func(arr,index+1);
		cout<<arr[index]<<endl;
	}
}
int main()
{
	char arr[]="HAIDER";
	func(arr,0);

    return 0;
}

