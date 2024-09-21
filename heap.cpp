#include <iostream>
using namespace std;
int main()
{
	int *ptr = new int[2];
	*ptr=3;
	cout<<*ptr<<endl;
	delete ptr;
	
}
