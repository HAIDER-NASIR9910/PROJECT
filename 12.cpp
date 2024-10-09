#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	int i=0;
	int count=0;
	while(name !='\0')
	{
		count++;
		i++;
	}
	string *ptr= new string(name);

    cout<<count<<endl;
}
