#include <iostream>
using namespace std;
void name2(char *name)
{
	
	if(name='\0')
	{
		return;
	}
	else 
	{
		cout<<name<<endl;
		return name2(name-1);
	}
}
int main()
{
	char *name1="Haider Nasir";
	
	//cout<<"ENTER THE CHARCATER"<<endl;
	//cin>>name<<endl;
	//name();
	name2("haider");
}
