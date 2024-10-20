#include <iostream>
using namespace std;

int main()
{
	string name;
	cout<<"ENTER YOUR NAME"<<endl;
	getline(cin,name);
	bool space=false;
	bool space2=false;
	for(int i=0; i<name.length();i++)
	{
		if(name[0])
		{
			cout<<"YOUR FIRST CHAR IS"<<" : "<<endl;
			cout<<name[0];
			break;
		}
		else if(name[i]==' ')
		{
			space=true;
			cout<<name[i]<<endl;
			break;
		}
		else if(name[i]==' ' && !space)
		{
			space2=true;
			cout<<name[i]<<endl;
			break;
		}
	}
	
	
    return 0;
}

