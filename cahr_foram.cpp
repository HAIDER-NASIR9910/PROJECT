#include <iostream>
using namespace std;
void char_return(string nam,int index=0)
{
	if(nam[index]='\0')
	{
		return;
	}
	else
	{
		cout<<nam[index]<<endl;
		return char_return(nam,index+1);
	}
}
int main()
{
	string name;
	cout<<" ENTER NAME "<<endl;
	getline(cin,name);
	char_return(name,0);
	return 0;
}
