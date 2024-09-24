#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"ENTER THE NAME "<<endl;
    cin>>name;
	int size;
	size=sizeof(name);
	cout<<"SIZE OF THE STRING IS"<<" : "<<size<<endl;
	string *ptr= new string[size];
	for(int i=0; i<size; i++)
	{
		cin>>ptr[i];
	}
		for(int i=0; i<size; i++)
	{
		cout<<ptr[i];
	}
	
	
}
