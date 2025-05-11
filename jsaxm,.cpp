#include <iostream>
using namespace std;
class student{
	protected:
	string name;
	int id;
	float gpa;
	public:
	student(string nam,int i,float g)
	{
		name=nam;
		id=i;
		gpa=g;
	}
	
	void display() const
	{
		cout<<"NAME IS"<<" : "<<name<<endl;
		cout<<"ID IS"<<" : "<<id<<endl;
		cout<<"GPA IS"<<" : "<<gpa<<endl;
	}
	
};
class test:  public  student{
	private:
	int num1;
	int num2;
	static string name;
	public:
	test(int n1,int n2,string nam,int i,float g):student(nam,i,g),num1(n1),num2(n2){}
	
	
	void setnum1(int n1)
	{
		num1=n1;
	}
	int getnum1()
	{
		return num1;
	}
	
	
	void setnum2(int n2)
	{
		num2=n2;
	}
	int getnum2()
	{
		return num2;
	}
	
	
	void display() const{
		
		student::display();
		cout<<"NUM1 IS"<<" : "<<num1<<endl;
		cout<<"NUM2 IS"<<" : "<<num2<<endl;
	}
	static void setname(string nam)
	{
		name=nam;
	}
	static string getname()
	{
		return name;
	}
	static void print_name()
	{
		cout<<"NAME IS"<<" : "<<name<<endl;
	}
	void displaynums()
	{
		cout<<"SUM OF NUM1 ARE"<<" : "<<num1<<endl;
		cout<<"SUM OF NUM2 ARE"<<" : "<<num2<<endl;
	}
	
	
	
};
string test:: name="HAIDER";
test operator +(test t1, test t2)
{
	test t3(0,0," ",0,0.0);
	t3.setnum1(t1.getnum1()+t2.getnum1());
	t3.setnum2(t1.getnum1()+t1.getnum2());
	return t3;
}
int main()
{
	test t1(1,2,"HAIDER NASIR",1,3.91);
	t1.display();
	test t2(2,1,"ATTA",2,3.49);
	t2.display();
	test sum=t1+t2;
	sum.displaynums();


    return 0;
}

