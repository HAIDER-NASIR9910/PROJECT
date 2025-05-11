#include <iostream>
using namespace std;
class person{
	private:
	string name;
	int age;
	public:
	person(){
	}
	person(string nam,int i):name(nam),age(i){
	}
	void display()
	{
		cout<<"YOUR NAME IS"<<"  :  "<<name<<endl;
		cout<<"YOUR AGE IS"<<" : "<<age<<endl;
	}
	void setname(string nam)
	{
		name=nam;
	}
	string getname()
	{
		return name;
	}
	void setage(int a)
	{
		age=a;
	}
	int getage()
	{
		return age;
	}
};
class salaried: public virtual person{
	private:
	int salary;
	public:
	salaried(int sal):salary(sal),person(" ",00)
	{
		
	}
	void setsalary(int sal)
	{
		salary=sal;
	}
	int getsalary()
	{
		return salary;
	}
};
class student : public virtual person{
	private:
	float gpa;
	int id;
	public:
	student(float g,int i):gpa(g),id(i),person(" ",0){}
	void setgpa(float g)
	{
		gpa=g;
	}
	float getgpa()
	{
		return gpa;
	}
	void setid(int i)
	{
		id=i;
	}
	int getid()
	{
		return id;
	}
};
class graduate_student:public student,public salaried{
	public:
	graduate_student():student(0.0,0),salaried(0){}
	void display()
	{
		cout<<"YOUR NAME IS"<<" : "<<person::getname()<<endl;
		cout<<"YOUR AGE IS"<<" : "<<person::getage()<<endl;
		cout<<"YOUR SALARY IS"<<" : "<<salaried::getsalary()<<endl;
		cout<<"YOUR  GPA WAS"<<" : "<<student::getgpa()<<endl;
		cout<<"YOUR ID WAS"<<" : "<<student::getid()<<endl;
	}
	
};
int main()
{
	graduate_student g1;
	g1.setname("HAIDER");
	g1.setage(18);
	g1.setsalary(20000000);
	g1.setgpa(3.91);
	g1.setid(1);
	g1.display();

    return 0;
}

