#include <iostream>
using namespace std;
class student{
	string *name;
	string *section;
	int *id;
	public:
	student(string n,string s,int i)
	{
	   name=new string(n);
	   section=new string(s);
	   id= new int(i);
	}
	~student()
	{
		delete name;
		delete section;
		delete id;
	}
	void display()
	{
		cout<<"STUDENT NAME IS   "<<*name<<endl;
		cout<<"SECTION OF THE STUDENT IS   "<<*section<<endl;;
		cout<<"ID OF THE STUDENT IS   "<<*id<<endl;
	}
	student(const student &s1)
	{
		name=new string(*s1.name);
		section=new string(*s1.section);
		id=new int(*s1.id);
	}
};
int main()
{
	student s1("HAIDER","AI-BLUE",1);
	s1.display();
	student st2(s1);
	st2.display();

    return 0;
}

