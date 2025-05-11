#include <iostream>
using namespace std;
class test{
	private:
	int num1;
	int num2;
	public:
	test(int n1,int n2):num1(n1),num2(n2){}
	test operator +(test t2)
	{
		test t3(0,0);
		t3.num1=num1+t2.num1;
		t3.num2=num2+t2.num2;
		return t3;
	}
	void display()
	{
		cout<<"YOUR NUM1 IS"<<" : "<<num1<<endl;
		cout<<"YOUR NUM2 IS"<<" : "<<num2<<endl;
	}
	void setdata(int n1)
	{
		num1=n1;
	}
	void setnum2(int n2)
	{
		num2=n2;
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
	test t3(0,0);
	t3.setdata(x+t2.getnum1());
	t3.setnum2(x+t2.getnum2());
	return t3;
}
int main()
{
	test t1(2,3);
	test t2(3,2);
	test sum=t1+t2;
	sum.display();
	test t4=5+t1;
	t4.display();
	
	

    return 0;
}

