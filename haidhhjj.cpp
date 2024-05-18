#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
int main()
{
	char ch;
	cout<<"enter the alphabet";
	cin>>ch;
	if (isupper(ch))
	{
		cout<<"your result is upper casse\n";
		
	}
	else              //islower for lower case
		{
		cout<<"your result is lower case";
	}
	return 0;
	
}
