#include <iostream>
using namespace std;
void nam1(string nam, int index=0)
{
	if(nam[index]=='\0')
	{
		return;
	}
	else
	{
		cout<<nam[index]<<endl;
		return nam1( nam , index+1);
		
	}
}
int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
    nam1(name);
    return 0;
}

