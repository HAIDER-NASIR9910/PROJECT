#include <iostream>
using namespace std;
class test{

	private:
	int num1;
	int num2;
	public:
	test()
	{
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	~	test()
	{
		cout<<"DESTRUCTOR IS CALLED"<<endl;
	}
		void display()
	{
		cout<<"ADDING NUMBERS 1"<<" : "<<num1<<endl;
		cout<<"ADDING NUMBERS 2"<<" : "<<num2<<endl;		
	}
	
	void set(int n1, int n2)
	{
		num1=n1;
		num2=n2;
	}
	void operator ++()
	{
		cout<<"per"<<endl;
		++num1;
	}
	void operator++(int)
	{
		cout<<"post"<<endl;
		num1++;
	}
		void operator --()
	{
		cout<<"per"<<endl;
		--num1;
	}
	void operator--(int)
	{
		cout<<"post"<<endl;
		num1--;
	}
	test operator +(test t2)
	{
		test t3;
		t3.num1=num1+t2.num1;
		t3.num2=num2+t2.num2;
		return t3;
	}

	
};
int main()
{
	 test t1,t2;
	 t1.set(3,4);
	 t1.operator ++();
	 	 t1.display();
	 t1.operator --();
	 	 t1.display();
	 t1.operator++();
	 	 t1.display();
	 t1.operator--();
	 t1.display();
	 t1.display();
	 t2.set(5,6);
	 t2.display();
	 test sum;
	 sum=t1+t2;
	 sum.display();
	 
}
