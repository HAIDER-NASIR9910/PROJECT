#include <iostream>
using namespace std;
int char_search(char search,char arr[], int index=0)
{
	if(arr[index]=='\0')
	{
		return 0;
	}
	
	else if(arr[index]!='\0' &&  arr[index]==search )
	{
		return 1+ char_search(search,arr,index+1);
	}
	
	else if(arr[index]!='\0'  &&  arr[index]!=search )
	{
		return 0+ char_search(search,arr,index+1);
	}
}
int main()
{
	char arr[]="haider nasirn";
	cout<<char_search('n',arr,0);

    return 0;
}

