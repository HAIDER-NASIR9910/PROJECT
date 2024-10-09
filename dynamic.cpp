#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	int length=0;
	while(name[length]!='\0')
	{
		length++;
	}
	cout<<"LENGTH OF THIS NAME IS"<<endl;
	cout<<length<<endl;
	string *ptr=new string(name);
	for(int i=0; i<=length; i++)
	{
		cout<<name[i]<<" ";
	}
}
