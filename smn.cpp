#include <iostream>
using namespace std;
class employee{
	public:
	int salary;
	void setdata(int s)
	{
		salary=s;
	}
	int getsalary()
	{
		return salary;
	}
	
};
class test{
	public:
	int num1;
	int num2;
	void setdata(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	void print()
	{
		cout<<"NUM1 IS"<<" : "<<num1<<endl;
		cout<<"NUM2 IS"<<" : "<<num2<<endl;
	}
	int getnum1()
	{
		return num1;
	}
	int getnum2()
	{
		return num2;
	}
};
test  operator + (employee e1,test t2)
{
	test t3;
	t3.num1=e1.getsalary()+t2.getnum1();
	t3.num2=e1.getsalary()+t2.getnum2();
	return t3;
}
int main()
{
	test t1;
	t1.setdata(2,3);
	test t2;
	t2.setdata(3,2);
	employee e1;
	e1.setdata(200);
	test sum=e1+t2;
	sum.print();
    return 0;
}

