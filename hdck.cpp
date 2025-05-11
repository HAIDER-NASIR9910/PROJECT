#include <iostream>
using namespace std;
class test{
	int num1;
	int num2;
	public:
	test(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	void print()
	{
		cout<<"NUMBERS ONE ADDATION ARE"<<" : "<<num1<<endl;
		cout<<"NUMBERS TWO ADDTION ARE"<<" : "<<num2<<endl;
	}
	test operator+(test t2)
	{
		test t3(0,0);
		t3.num1=num1+t2.num1;
		t3.num2=num2+t2.num2;
		return t3;
	}
};
int main()
{
	test t1(2,3);
	test t2(3,2);
	test sum=t1+t2;
	sum.print();

    return 0;
}

