#include <iostream>
using namespace std;

int main()
{
	string name="HAIDER NASIR";
	string *ptr=new string(name);
	cout<<(*ptr)<<endl;
	for(int i=0; i<name.length();i++)
	{
		cout<<(*ptr)[i]<<endl;
	}
	
	delete[] ptr;
	
	

    return 0;
}

