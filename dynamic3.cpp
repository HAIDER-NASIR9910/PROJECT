#include <iostream>
using namespace std;

int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	string *ptr=new string(name);
	int index=0;
	for(int i=0;i<ptr->length();i++)
	{
		cout<<(*ptr)[i]<<endl;
	}

    return 0;
}

