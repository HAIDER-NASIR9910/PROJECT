#include <iostream>
using namespace std;

int main()
{
	string name;
	cout<<"ENTER THE NAME"<<endl;
	getline(cin,name);
	string *ptr=new string(name);
	for(int i=0; i<(*ptr).length();i++){
		cout<<(*ptr)[i]<<endl;
	}
	delete[] ptr;
	ptr=NULL;
    return 0;
}

