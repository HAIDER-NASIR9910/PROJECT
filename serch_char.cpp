#include <iostream>
using namespace std;
int search_char(char find,char arr[],int index =0)
{
	if(arr[index]=='\0')
	{
		return 0;
	}
	else if(arr[index]==find)
	{
		return 1+search_char(find,arr,index+1);
	}
	else if(arr[index]!=find)
	{
		return 0+search_char(find,arr,index+1);
	}
}
int main()
{
	char arr[]="HAIDER NASIR";
	int x=search_char('A',arr,0);
	cout<<x<<endl;
	return 0;
}
