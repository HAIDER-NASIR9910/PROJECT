#include <iostream>
#include <string>
using namespace std;
void getname(const string &name, int index=0)
{
	if(index==name.length())
	{
		return;
	}
	cout<<name[index]<<endl;
	    getname(name, index + 1);
}
int main()
{
    string name;
	cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
	getline(cin,name);
	getname(name);	
}
