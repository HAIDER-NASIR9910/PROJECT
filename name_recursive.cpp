#include <iostream>
using namespace std;
void name1(const string &name, int index=0)
{
	if(index==name.length())
	{
		return;
	}
	else
	{
		cout<<name[index]<<endl;
		return name1(name, index+1);
	}
}
int main()
{
	   string name;
   cout<<"enter the name"<<endl;
   getline(cin,name);
   name1(name);
   return 0;
}
