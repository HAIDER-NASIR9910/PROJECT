#include <iostream>
using namespace std;
int search(char search_char,char arr[],int index=0)
{
	if(arr[index]=='\0')
	{
		return 0;
	}
	else if(arr[index]==search_char)
	{
		return 1+search(search_char,arr,index+1);
	}
	else
	{
		return 0+search(search_char,arr,index+1);	
	}
}
int main()
{
	char arr[]="Haider Nasir";
	int x=search('a',arr,0);
	cout<<x<<endl;
}
