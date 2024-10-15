#include <iostream>
using namespace std;
void char_wise(string nam,int index=0)
{
	if(nam[index]=='\0')
	{
		return;
	}
	else
	{
		cout<<nam[index]<<endl;
		return char_wise(nam,index+1);
	}
}
int main()
{
	string name;
	cout<<"enter the name of yours"<<" : "<<endl;
	getline(cin,name);
	char_wise(name,0);
}
