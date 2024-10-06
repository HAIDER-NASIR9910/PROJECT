#include <iostream>
using namespace std;
class test{
	private:
	int num;
	public:
	void get()
	{
		cout<<"ENTER THE NUMBER "<<" : "<<endl;
		cin>>num;
	}
	void display()
	{
		cout<<"THE NUMBER IS "<<" : "<<num<<endl;
	}
	test ()
	{
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	~test ()
	{
		cout<<"DECONSTRUCTOR IS CALLED"<<endl;
	}
	void sum1()
	{
		cout<<"YOUR SUM IS"<<" : "<<num;
	}
    test operator +(test t2)
	{
		test t3;
		t3.num=num+t2.num;
		return t3;
	}
};
int main()
{
	test t1;
	t1.get();
	t1.display();
	test t2;
	t2.get();
	t2.display();
	test sum=t1+t2;
	sum.sum1();
}
