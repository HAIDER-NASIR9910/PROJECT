#include <iostream>
using namespace std;
class A{
		int num;
	public:
	void get(int n)
	{
		num=n;
		cout<<"YOUR NUM IS"<< "  :  "<<num<<endl;  
	}
	
};
class B : A{
		float num;
	public:
	void get(float n)
	{
		num=n;
		cout<<"YOUR NUM IS"<< "  :  "<<num<<endl;  
	}
};
class C : B{
	double num;
	public:
	void get(double n)
	{
		num=n;
		cout<<"YOUR NUM IS"<< "  :  "<<num<<endl;  
	}
};
int main()
{
	C c1;
	c1.get(23.9999);
	c1.get(23.2);
	c1.get(23);
}
