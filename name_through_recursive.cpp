#include <iostream>
using namespace std;
void name_in_char(string nam,int index=0)
{
	if(nam[index]=='\0')
	{
		return;
	}
	else{
		cout<<nam[index]<<"-----"<<endl;
		return name_in_char(nam,index+1);
	}
}
int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
    name_in_char(name,0);
    return 0;
}

