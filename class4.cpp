#include <iostream>
using namespace std;
class student{
	private:
	string *name;
	string *section;
	int *id;
	public:
	student(string n,string s,int i)
	{
		name=new string(n);
		section=new string(s);
		id=new int(i);
	}
	~student()
	{
		delete[] name;
		delete[] section;
		delete   id;
	}
	void print();
};
void student::print(){
	cout<<"THE NAME IS"<<" : "<<*name<<endl;
	cout<<"THE SECTION IS"<<" : "<<*section<<endl;
	cout<<"THE ID IS"<<" : "<<*id<<endl; 
}
int main()
{
	student s1("HAIDER","AI-BLUE",1);
	s1.print();

    return 0;
}

