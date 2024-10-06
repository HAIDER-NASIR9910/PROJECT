#include <iostream>
using namespace std;
void getname(string nam)
{


}

int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	int length=0;
    while( name[length]!='\0')
    {
    	length++;
	}
	cout<<"YOUR LENGTH IS"<<" : "<<endl;
	cout<<length;
	for(int i=0; i<=length; i++)
	{
		cout<<name[i]<<endl;
	}
}
