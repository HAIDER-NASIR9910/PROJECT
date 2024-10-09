#include <iostream>
using namespace std;
class test{
	private:
	int num;
	int num1;
	public:
	test(){
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	~test(){
		cout<<"DECONSTRUCTOR IS CALLED"<<endl;
	}
	void setdat(int n,int n1)
	{
		num=n;
		num1=n1;
	}
	test operator +(test t2)
	{
		test t3;
		t3.num=num+t2.num;
		t3.num1=num1+t2.num1;
		return t3;
	}
	void print()
	{
		cout<<"your addition is"<<" : "<<num;
		cout<<endl;
		cout<<"your addition is"<<" : "<<num1;
		cout<<endl;
	}
};
int main()
{
	test t1,t2;
	t1.setdat(4,5);
	t2.setdat(7,8);
	test sum=t1+t2;
	sum.print();
	
}
