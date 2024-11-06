#include <iostream>
using namespace std;
int search_char(char search,char arr[20],int index=0)
{
	if(arr[index]=='\0')
	{
		return 0;
	}
	else if(search==arr[index])
	{
		return 1 + search_char(search,arr,index+1);
	}
	else 
	{
		return 0 + search_char(search,arr,index+1);
	}
}
int main()
{
	char arr1[20]="HAIDER NASIR";
	int x=search_char('A',arr1,0);
	cout<<x<<endl;
	

    return 0;
}

