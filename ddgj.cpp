#include <iostream>
using namespace std;
int main()
{
	int a=5;
	int *ptr=&a;
	cout<<ptr<<endl;
	cout<<&ptr<<endl;  //location or address of ptr
	cout<<*ptr<<endl;
	cout<<&*ptr<<endl;
	cout<<*&ptr<<endl;
}
