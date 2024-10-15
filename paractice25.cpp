#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	int size=name.size();
	cout<<"YOUR CHARCATERS ARE"<<" : "<<size<<endl;
	string *ptr=new string(name);
	
}
