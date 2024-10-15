#include <iostream>
using namespace std;
void char_foarm(string nam, int index=0)
{
	if(nam[index]=='\0')
	{
		return;
	}
	else
	{
		cout<<nam[index]<<endl;
		return char_foarm(nam,index+1);
	}

}
int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	char_foarm(name);
}
