#include <iostream>
using namespace std;
class pointer_class{
	private:
	string *name;
	static string section;
	int *id;
	float *gpa;
	public:
	pointer_class()
	{
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	void  setdata(string n,int i,float g)
	{
		name=new string(n);
		id=new int(i);
		gpa= new float(g);
	}
	pinter_class(string n,int i,float g)
	{
		name=new string(n);
		id=new int(i);
		gpa= new float(g);
	}
	~pointer_class()
	{
		cout<<"DESTRUCTOR IS CALLED"<<endl;
		delete name;
		delete id;
		delete gpa;		
	}
	void print()
	{
		cout<<"NAME IS"<<" : "<<*name<<endl;
		cout<<"SECTION IS"<<" : "<<section<<endl;
		cout<<"ID IS"<<" : "<<*id<<endl;
		cout<<"GPA IS"<<" : "<<*gpa<<endl;
	}
	
	
};
string pointer_class :: section="AI-BLUE";
int main()
{
	
	pointer_class p1;
	p1.setdata("haider",1,3.91);
	p1.print();
	//pointer_class p2("HAIDER",1,3.91);
	//p2.print();
	

    return 0;
}

