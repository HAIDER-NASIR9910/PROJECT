#include <iostream>
using namespace std;
class student{
	protected:
	string name;
	int id;
	public:
	student(string nam=" ",int i=0)
	{
		name=nam;
		id=i;
	}
	~student(){}
	student(student &s)
	{
		this->id=s.id;
		this->name=s.name;
	}
	student getname(string nam)
	{
		name=nam;
		return *this;
	}
	student getid(int i)
	{
		id=i;
		return *this;
	}
	void print()
	{
		cout<<"NAME"<<" : "<<endl;
		cout<<"ID"<<" : "<<endl;
	}
};
int main()
{
	student *st1=new student[3];
	student s1("HAIDER",1);
	student st2=s1;
	student st3(" ",0);

	

    return 0;
}

