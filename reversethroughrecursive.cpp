#include <iostream>
using namespace std;
void reversename(const string &name, int index=0)
{
	if(index==name.length())
	{
		return;
	}
	else
	{
		cout<<name[index]<<endl;
		return reversename(name, index+1);
	}
}

int main()
{
   string name;
   cout<<"enter the name"<<endl;
   getline(cin,name);
   reversename(name);
   return 0;	
}
