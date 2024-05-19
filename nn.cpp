#include <iostream>
using namespace std;
int main()
{
	int a=22;
	int *ptr=&a;
	cout<<ptr<<endl;
	cout<<&*ptr<<endl;
	cout<<*&ptr<<endl;
	cout<<&ptr<<endl;
	cout<<*ptr<<endl;
}
