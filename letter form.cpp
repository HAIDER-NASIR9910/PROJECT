#include <iostream>
using namespace std;
void letter(string name1, int index=0)
{
   if(index==name1.length())
   {
   	return ;
   }
   else
   {
   	cout<<name1[index]<<endl;
   	return letter(name1,index+1);
   }
   
   
}
int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	letter(name);
}
