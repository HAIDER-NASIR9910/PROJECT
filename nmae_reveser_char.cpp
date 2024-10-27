#include <iostream>
using namespace std;
void revese_char_name(string n,int index=0)
{
	if(n[index]=='\0')
	{
		return;
	}
	else 
	{
	  cout<<n[index]<<endl;
	  return revese_char_name(n,index+1);	
	}
}
int main()
{
	string name;
	cout<<"ENTER THE NUM"<<endl;
	getline(cin,name);
    revese_char_name(name);
    return 0;
}

