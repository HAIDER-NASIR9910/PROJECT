#include <iostream>
using namespace std;
class A{
	protected:
	int num1;
	public:
	A(int n1):num1(n1){
	}
	virtual void display()=0;
};
class B:public A{
	protected:
	int num2;
	public:
	B(int n1,int n2):A(n1),num2(n2){
	}
	virtual void display()
	{
		cout<<"NUM1"<<num1<<endl;
		cout<<"NUM1"<<num2<<endl;
	}
};
class C:public B{
	protected:
	int num3;
	public:
	C(int n1,int n2,int n3):B(n1,n2),num3(n3){
	}
	virtual void display()
	{
		cout<<"NUM1"<<num1<<endl;
		cout<<"NUM1"<<num2<<endl;
		cout<<"NUM1"<<num3<<endl;
	}
};
int main()
{
	A a1(0);

    return 0;
}

