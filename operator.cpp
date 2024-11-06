#include <iostream>
using namespace std;
class test{
	private:
	int num1;
	int num2;
    public:
	void set(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	test operator +(test t2)
	{
		test t3;
		t3.num1=num1+t2.num1;
		t3.num2=num2+t2.num2;
		return t3;
	}
	void display()
	{
		cout<<"SUM IS"<<" : "<<num1<<endl;
		cout<<"SUM IS"<<" : "<<num2<<endl;
	}
};
int main()
{
	test t1;
	t1.set(2,3);
	test t2;
	t2.set(4,5);
	test sum=t1+t2;
	sum.display();
    
    return 0;
}

