#include <iostream>
using namespace std;
int main()
{
	char a='A';
	char *ptr=&a;
	cout<<ptr<<endl;
	cout<<*&ptr<<endl;
	cout<<&*ptr<<endl;
	cout<<*ptr<<endl;
	cout<<&ptr<<endl;
}
