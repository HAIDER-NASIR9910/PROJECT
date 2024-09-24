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
	string *name1= &name;
	cout<<"CHARACTER WISE OUPUT IN WAY OF INDEXING"<<endl;
	cout<<name[0]<<endl;
	cout<<"REVERSED OF THE NAME IS"<<" : "<<endl;
	for(int i=size;i>=0;i--)
	{
		cout<<name[i];
	}
	delete name1;
	return 0;
}
