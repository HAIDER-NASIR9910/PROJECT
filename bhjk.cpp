#include <iostream>
using namespace std;
int main()
{
	int x=9;
	void *p=&x;
	cout<<p<<endl;
	cout<<*p<<endl;
}
