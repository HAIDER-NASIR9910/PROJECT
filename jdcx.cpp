#include <iostream>
using namespace std;
class A{
	private:
	string name;
	int id;
	static string section;
	public:
	A(string n,int i);
	static string getname(string n)
	{
		section=n;
		return section;
	}
	void display();
};

A :: A(string n,int i)
{
	name=n;
	i=id;
}
void A ::display()
	{
		cout<<"name is"<<" : "<<name<<endl;
		cout<<"id is"<<" : "<<id<<endl;
		cout<<"section is"<<" : "<<section<<endl; 
	}
int main()
{

    return 0;
}

