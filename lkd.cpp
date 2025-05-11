#include <iostream>
using namespace std;

int main()
{
	char arr[]="HAIDER";
	char *ptr=new char[6];
	for(int i=0;i<6;i++)
	{
		ptr[i]=arr[i];
	}
	cout<<ptr++;
	cout<<ptr+1;
	for(int i=0;i<6;i++)
	{
		//cout<<ptr[i]<<endl;
	}
	cout<<endl;
	string name="HAIDER";
	string *ptr2=new string(name);
	for(int i=0; i<=name.length();i++)
	{
		//cout<<(*ptr2)[i]<<endl;
	}

    return 0;
}

