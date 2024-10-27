#include <iostream>
using namespace std;
void name1(string nam,int index=0)
{
	if(nam[index]=='\0')
	{
		return;
	}
	else
	{
		cout<<nam[index]<<endl;
		return name1(nam,index+1);
	}
}
int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	name1(name,0);

    return 0;
}

