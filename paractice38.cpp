#include <iostream>
using namespace std;
void fun(string nam,int index=0)
{
	
	if(nam[index]=='\0')
	{
		return;
	}
	else
	{
		cout<<nam[index]<<endl;
		return fun(nam,index+1);
	}
}
int main()
{
  string name;
  cout<<"ENTER THE NAME"<<endl;
  getline(cin,name); 
  fun(name,0);
 return 0;
}

