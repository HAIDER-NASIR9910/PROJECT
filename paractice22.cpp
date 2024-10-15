#include <iostream>
using namespace std;
class A{
	private:
	int num;
	public:
	void set(int n)
	{
		num=n;
	}
};
class B : public A{
	private:
	int num2;
	public:
	void get(int n1)
	{
		num2=n1;
	}
	void display()
	{
		set(20);
		cout<<"YOUR NUM IS"<<" : "<<endl;
	}
};
class C : private B{
	private:
	int num3;
	public:
	void func(int n2)
	{
		num3=n2;
	}
	void display1()
	{
		get(21);
		cout<<"YOUR NUM2 IS"<<" : "<<endl;
	}
};
int main()
{
	C c;
	c.get(21);
	c.display();
	c.set(22);
	c.display1();
}
