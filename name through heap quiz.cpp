#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	int i=0;
	int count=0;
	while(name[i]!='\0')
	{
		if(name[i]!=" " && i==0)
		{
			count++;
		}
		else if(name[i]==" "&& name[i+1]!=" ")
		{
			count++;
		}
		i++:
	}
	char *initials=new char[count];
	int k=0;
	int n=0;
	while(name[k]!='\0')
	{
		if(name[k]==" "&&k==0)
		{
			initials[n]=name[0];
		}
		else if(namr[k]==" "&& name[k+1]!=" ")
		{
			initials[n]=name[k+1];
			n++;
		}
		k++;
	}
}
