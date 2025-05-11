#include <iostream>
using namespace std;
class student{
	protected:
	string *name;
	int *gpa;
	static  string uni_name;
	public:
	student(){}
	student(string nam,int g)
	{
		name=new string(nam);
		gpa=new int(g);
	}
	
	~student()
	{
		delete name;
		delete gpa;
	}
	
	virtual void display()
	{
		cout<<"NAME"<<" : "<<*name<<endl;
		cout<<"GPA"<<" : "<<*gpa<<endl;
	}
};
string student :: uni_name="PAK-AUSTRIA";
class alumini: student{
	protected:
	string company;
	int year_passing_out;
	public:
	alumini(string comp,int year)
	{
		company= comp;
		year_passing_out=year;
	}
	~alumini(){}
	virtual void display()
	{
		cout<<"NAME"<<" : "<<*name<<endl;
		cout<<"GPA"<<" : "<<*gpa<<endl;
		cout<<"COMAPANY"<<" : "<<company<<endl;
		cout<<"PASSING OUT YEAR"<<" : "<<year_passing_out<<endl;
	}
};
int main()
{
	student *st=new alumini("TECH",2022);
	st->display();
	

    return 0;
}

