#include <iostream>
using namespace std;
class A{
	protected:
	int num1;
	int num2;
	public:
	void set(int n, int n2)
	{
		num1=n;
		num2=n2;
	}
	void get()
	{
		cout<<"NUM 1 IS"<<" : "<<num1<<endl;
		cout<<"NUM 2 IS"<<" : "<<num2<<endl;
	}
	
};

class B : public A{
	public:
	void displayB(){
		
			get();
	}

};
class C: public A{
	public:
		void displayC(){
		
			get();
	}
	};

int main()
{
	A a;
	B b;
	C c;
	a.set(2,3);
	a.get();
	b.set(3,4);
	b.displayB();
	c.set(5,6);
	c.displayC();
}
