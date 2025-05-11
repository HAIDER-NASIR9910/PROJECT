#include <iostream>
using namespace std;
class employee{
	private:
	int num1;
	public:
	employee(int n1)
	{
		num1=n1;
	}
	void setnum1(int n1)
	{
		num1=n1;
	}
	int getnum1()
	{
		return num1;
	}
};
class test{
	private:
	int num2;
	int num3;
	public:
	test(int n2,int n3):num2(n2),num3(n3){}
	void setnum2(int n2)
	{
		num2=n2;
	}
	int getnum2()
	{
		return num2;
	}
	void setnum3(int n3)
	{
		num3=n3;
	}
	int getnum3()
	{
		return num3;
	}	
	void display()
	{
		cout<<"YOUR NUM2 IS"<<" : "<<num2<<endl;
		cout<<"YOUR NUM3 IS"<<" : "<<num3<<endl;
	}
	
};
test operator +(employee e1,test t2)
{
	test t3(0,0);
	t3.setnum2(e1.getnum1()+t2.getnum2());
	t3.setnum3(e1.getnum1()+t2.getnum3());
	return t3;	
}
int main()
{
	employee e1(20000);
	test t1(2,3);
	test t3=e1+t1;
	t3.display();

    return 0;
}

