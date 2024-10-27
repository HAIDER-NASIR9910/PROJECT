#include <iostream>
using namespace std;

int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	cout<<"FIRST CHARCTER IS"<<endl;
	char first_name=name[0];
	cout<<first_name<<endl;
	bool isspace1=false;
	for(int i=0;i<name.length();i++)
	{
		if(name[i]=='\0')
		{
			break;
		}
		else if(name[i]==' '&& name[i]!=first_name)
		{
			isspace1=true;
			cout<<name[i+1]<<endl;
			break;
		}
		else if(name[i]==' '&& name[i]!=isspace1)
		{
			cout<<name[i+1]<<endl;
			break;
		}
		
	}

    return 0;
}

