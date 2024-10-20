#include <iostream>
using namespace std;

int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	string *ptr=new string(name);
	int length;
    for(int i=0; i<name.length(); i++)
    {
    	if((*ptr)[0])
    	{
    		cout<<"YOUR FIRST CHARACTER IS"<<" : "<<(*ptr)[0]<<endl;
    		break;
		}
		if((*ptr)[i]==' ')
		{
			cout<<"SECOND IS"<<(*ptr)[i];
			break;
		}
	}
    return 0;
}
