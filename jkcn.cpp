#include <iostream>
using namespace std;
string getname(string *nam, int index=0)
{
   if(nam='\0')
   {
   	return 0;
   }
   	cout<<nam<<endl;
   	int length=0;
   	for(int i=0; i<=length; i++)
	{
		cout<<nam[i]<<endl;
	}
	cout<<nam[index]<<endl;
   return getname(nam);

}
void print_reverse(string *nam1)
{
       if(nam1='\0')
   {
   	return;
   }
   else
   {
   	cout<<nam1<<endl;
   }
}

int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	string *namechar=new string(name);
	getname(namechar);
	print_reverse(namechar);
	
}
