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
	 
	  revese_char_name(n,index+1);	
	   cout<<n[index]<<endl;
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

