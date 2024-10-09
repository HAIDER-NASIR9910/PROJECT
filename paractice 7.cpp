#include <iostream>
using namespace std;
int find(char search,char str[],int subscript)
{
	if(str[subscript]=='\0')
	{
		return 0;
	}
	else if(str[subscript]==search)
	{
		return 1+find(search,str,subscript+1);
	}
		else if(str[subscript]!=search)
	{
		return 0+find(search,str,subscript+1);
	}
}
int main()
{
	char arr[]="HAIDER NASIR";
	int result=find('H',arr,0);
	cout<<result<<endl;
	
}
