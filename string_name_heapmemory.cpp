#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"enter the name"<<endl;
	getline(cin,name);
	string *ptr= new string(name);
	for(int i=0; i<12;i++)
	{
		cout<<ptr[i];
	}

}
