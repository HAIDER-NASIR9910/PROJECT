#include <iostream>
using namespace std;
class firm{
	private:
	string *name;
	string *departmentname;
	int *id;
	static string company_name;
	public:
	firm(string n,string dep,int i)
	{
		name=new string(n);
		departmentname=new string(dep);
		id= new int(i);
	}
	void print()
	{
		cout<<"COMAPNY IS"<<" : "<<company_name<<endl;
		cout<<"NAME OF THE EMPLOYEE IS"<<" : "<<*name<<endl;
		cout<<"DEPARTMENET OF THE EMPLOYEE IS"<<" : "<<*departmentname<<endl;
		cout<<"ID OF THE EMPLOYEE IS"<<" : "<<*id<<endl;
	}
	~firm() {
        delete name;
        delete departmentname;
        delete id;
    }
};
string firm::company_name="NEITHER"; 
int main()
{
	firm f1("HAIDER","AI",123);
	f1.print();

    return 0;
}

