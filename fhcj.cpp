#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	int count=0;
	int i=0;
	while(name[i]!='\0')
	{
		count++;
		i++;
	}
	cout<<"no of the count is equal to the"<<" : "<<count<<endl;
	int size=count;
	string *name1= new string(name);
	for(int i=size; i>=0; i--)
	{
		cout<<name[i];
	}
	delete name1;
	return 0;
}
