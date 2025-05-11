#include <iostream>
using namespace std;
class test{
	protected:
	int num1;
	int num2;
	public:
	test(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	void display()
	{
		cout<<"NUM1 IS"<<" : "<<num1<<endl;
		cout<<"NUM2 IS"<<" : "<<num2<<endl;
	}
	virtual int negative()
	{
		return num1-=num2;	
	}
};
class test2:public test{
	private:
	int num3;
	public:
	test2(int n3,int n1,int n2):num3(n3),test(n1,n2){}
	void display()
	{
		test::display();
		cout<<"NUM3 IS"<<" : "<<num3<<endl; 
	}
	int negative()
	{
		return num3-=num2;
	}
	
};
int main()
{
	test2 t2(2,3,4);
	t2.display();
	t2.negative();
	t2.display();
    return 0;
}

