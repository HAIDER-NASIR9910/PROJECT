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

int main()
{
	B b1;
	b1.get(22.3);
	b1.get(23);
	
}
