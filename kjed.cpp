#include <iostream>
#include "file.h"
using namespace std;
test::test(int n1)
{
	num1=n1;
}
int test::getnum1()
{
	return num1;
}
void test::stenum1(int n1)
{
	num1=n1;
}
int main()
{
	test t1(1);
	cout<<t1.getnum1()<<endl;

    return 0;
}

