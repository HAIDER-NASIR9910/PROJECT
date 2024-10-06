#include <iostream>
using namespace std;
int main()
{
	char *ptr="my name is haider nasir";
	*ptr=++*ptr;
	cout<<ptr<<endl;
	*ptr=*ptr++;
	cout<<ptr<<endl;
	
}
