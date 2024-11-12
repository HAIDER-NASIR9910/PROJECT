#include <iostream>
using namespace std;
class test{
	private:
	int num1;
	int num2;
	string name;
	public:
	test()
	{
	 cout<<"CONSTRUCTOR IS CALLED"<<endl;	
	} 
	test (int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	test  getnum1(int n1)
	{
		num1=n1;
		return *this;
	}
	test getnum2(int n2)
	{
		num2=n2;
		return *this;
	}
	void print()
	{
		cout<<"NUM1 IS"<<" : "<<num1<<endl;
		cout<<"NUM2 IS"<<" : "<<num2<<endl;
	}
	
};
int main()
{
	test t1(1,2);
	t1.getnum1(6).getnum2(7);
	t1.print();
	

    return 0;
}

