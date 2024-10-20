#include <iostream>
using namespace std;

int main()
{
    string name;
    cout<<"ENTER THE NAME"<<endl;
    getline(cin,name);
    int length=name.length();
    cout<<"THE LENGTH OF THE STRING IS"<<" : "<<length<<endl;
    string *ptr=new string(name);
    for(int i=0; i<length; i++)
    {
    	cout<<name[i]<<endl;
	}
	cout<<"----------------through pointers---------------"<<endl;
	    for(int i=0; i<length; i++)
    {
    	cout<<(*ptr)[i]<<endl;
	}
	delete ptr;
    return 0;
}

