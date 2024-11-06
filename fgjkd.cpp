#include <iostream>
using namespace std;
class A{
	private:
	string *name;
	string *section;
	int *id;
	public:
	A (string n,string s,int i)
	{
		name=new string(n);
		section=new string(s);
		id=new int(i);
	}
	~A()
	{
		delete[] name;
		delete[] section;
		delete id; 
	}
	void display()
	{
		cout<<"NAME IS"<<" : "<<*name<<endl;
		cout<<"SECTION IS"<<" : "<<*section<<endl;
		cout<<"ID IS"<<" : "<<*id<<endl;
	}
	
};
int main()
{
	A a("haider","ai-blue",1);
	a.display();

    return 0;
}

