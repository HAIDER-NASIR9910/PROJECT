#include <iostream>
using namespace std;
class student{
	private:
	string *name;
	int *id;
	float *gpa;
	public:
	student(string nam,int i,float g)
	{
		name=new string(nam);
		id=new int(i);
		gpa=new float(g);
	}
	void display()
	{
		cout<<"NAME IS"<<" : "<<*name<<endl;
		cout<<"ID IS"<<" : "<<*id<<endl;
		cout<<"GPA IS"<<" : "<<*gpa<<endl;
	}
};
int main()
{
	student s1("HAIDER",1,3.91);
	s1.display();

    return 0;
}

