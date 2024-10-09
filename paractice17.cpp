#include <iostream>
using namespace std;
class test{
	private:
	int num1;
	int num2;
	public:
	void getdata(int n1, int n2)
	{
		num1=n1;
		num2;n2;
	}
	void display()
	{
		cout<<"YOUR NUM1 IS"<<" : " <<num1<<endl;
		cout<<"YOUR NUM2 IS"<<" : "<<num2<<endl;
	}
	test (int num1, int num2)
	{
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
		cout<<"NUM ONE IS"<<" : "<<num1<<endl;
		cout<<"NUM TWO IS"<<" : "<<num2<<endl;
	}
	~test()
	{
		cout<<"DECONSTRUCTOR IS CALLED"<<endl;
	}
};
int main()
{
	test t1(2,4);
	test t2(2,3);
	t2.getdata(3,5);
	t2.display();
}
