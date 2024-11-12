#include <iostream>
using namespace std;
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
test operator +(int x,test t2)
{
	test t3;
	t3.num1=x+t2.getnum1();
	t3.num2=x+t2.getnum2();
	return t3;
}

int main()
{
	test t1;
	t1.setdata(2,3);
	test t2;
	t2.setdata(3,2);
	int x=100;
	test sum=x+t2;
	sum.print();
    return 0;
}

