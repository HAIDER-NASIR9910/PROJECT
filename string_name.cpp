#include <iostream>
using namespace std;

int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	int length=0;
	bool space1=false;
	bool space2=false;
	
	for(int i=0; i<name.length(); i++)
	{
		if(name==' ')
		{
			space1=true;
		}
		else if(name!=space1 && name==' ')
		{
			space2=true;
		}
		else if()
		{
			
		}
	}
    return 0;
}

