#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"ENTER THE FULL NAME"<<endl;
	getline(cin,name);
	cout<<name[0]<<endl;
	string first_character;
	first_character=name[0];
	cout<<first_character<<endl;
	string last_character;
	if(  name = '\0')
	{
		last_character=name;
	}
	string middle_char;
	if(name!=last_character && name!= first_character)
	{
		middle_char=name;
	}
	cout<<middle_char[0]<<endl;
	char *ptr= new char[3];
	*ptr[0]=first_character[0];
	*ptr[1]=second_char[0];
	*ptr[2]=last_character[0];
	cout<<*ptr[0]<<endl;
	cout<<*ptr[1]<<endl;
	cout<<*ptr[2]<<endl;	
}
