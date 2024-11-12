#include <iostream>
using namespace std;
class student{
	private:
	const string name;
	const int id;
	const float gpa;
	string section;
	static int count;
	public:
	student(string n,int i, float g,string sec): name(n),id(i),gpa(g)
	{
		section= sec;
		count++;
	}
	void print() const
	{
		cout<<"NAME IS"<<" : "<<name<<endl;
		cout<<"ID IS"<<" : "<<id<<endl;
		cout<<"GPA IS"<<" : "<<gpa<<endl;
		cout<<"SECTION IS"<<" : "<<section<<endl;
	}
	static int getcount()
	{
		return count;
	}
	
	
};
int  student :: count=0;
int main()
{
	student s1("HAIDER",1,3.91,"AI-BLUE");
	s1.print();
	cout<<s1.getcount();
	student s2("haider",1,3.91,"ai-blue");
	s2.print();
	//cout<<s2.getcount();
	cout<<student :: getcount()<<endl;
	

    return 0;
}

