#include <iostream>
using namespace std;
int reverse(char *s);
int main()
{
	char s[]="haider";
	int r=reverse(s);
	cout<<r;
}
int reverse(char *s)
{
	if(s=='\0')
	{
		return 0;
	}
	else{
	
//	cout<<reverse(s+1);
	return reverse(s+1);
}
}
