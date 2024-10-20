#include <iostream>
using namespace std;
int char_search(char search_char,char arr[],int index=0)
{
	if(arr[index]=='\0')
	{
		return 0;
	}
	else if(search_char==arr[index])
	{
		return 1+char_search(search_char,arr,index+1);
	}
	else if(search_char!=arr[index])
	{
		return 0+char_search(search_char,arr,index+1);
	}
}
int main()
{
	char arr[]="HAIDER NASIR";
	int result=char_search('H',arr,0);
    cout<<result<<endl;
    return 0;
}

