#include <iostream>
using namespace std;
struct pointer{
	int a;
	int *ptr;
	pointer()
	{
		ptr=&a;
	}
	void func1()
	{
	
	cout<<ptr<<endl;
	cout<<&*ptr<<endl;
	cout<<*&ptr<<endl;
	cout<<&ptr<<endl;
	cout<<*ptr<<endl;
	
	}
	
};
int main()
{
	pointer p1;
	p1.a=23;
	p1.func1();
}
