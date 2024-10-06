#include <iostream>
using namespace std;
class A{
	private:
	int num;
	public:
	void get(int n)
	{
		num=n;
	}
	void display()
	{
		cout<<"NUMBER YOU ENTERED IS"<<" : "<<num<<endl;
	}
	A operator %( A a1)
	{
		A a3;
		a3.num=num%a1.num;
		return a3;
	}
	void display1()
	{
		cout<<"your modolous is"<<" : "<<num;
	}
};
int main()
{
   A a,a1;
   a.get(4);
   a.display();	 
   a1.get(2);
   a1.display();
   A sum;
   sum=a1%a;	
   sum.display1();
}
