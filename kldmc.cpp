#include <iostream>
using namespace std;
void getname(string *nam)
{
   if(nam='\0')
   {
   	return;
   }
   else
   {
   	cout<<nam<<endl;
   	int length=0;
   	for(int i=0; i<=length; i++)
	{
		cout<<nam[i]<<endl;
	}
    //return getname(nam[length]-nam[1]);
   }

}


int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	int length=0;

	cout<<"YOUR LENGTH IS"<<" : "<<endl;
	cout<<length<<endl;

	string *namechar=new string(name);
	getname(namechar);
	//print_reverse(namechar);
	
}
