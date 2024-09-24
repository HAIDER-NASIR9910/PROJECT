#include <iostream>
using namespace std;
int  name1(char *name[100])
{
	if(*name='\0')
	{
		return 0;
	}
	else
	{
		cout<<name;
	name1(name+1);
	}
	
}
int main()
{
	char *n[100]="Haider";
	name1(*n);
}
