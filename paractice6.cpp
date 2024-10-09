#include <iostream>
using namespace std;
void func1(char arr[])
{
	if(arr='\0')
	{
		return;
	}
	else
	{
		cout<<arr<<endl;
		
	}
}

int main()
{
	char arr[]={"HAIDER NASIR"};
	func1(arr);
}
