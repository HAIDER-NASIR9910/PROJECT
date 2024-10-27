#include <iostream>
#include "save.h"
using namespace std;
void test :: get()
{
	cout<<"ENTER THE NUM1"<<endl;
	cin>>num1;
	cout<<"ENTER THE NUM2"<<endl;
	cin>>num2;
}
int test :: setnum1(int n1){
	num1=n1;
	return num1;
}
int test :: setnum2(int n2){
	num2=n2;
	return num2;
}
test::test(int n1,int n2){
	cout<<"CONSTRUCTOR IS CALLED"<<endl;
	num1=n1;
	num2=n2;
}
test ::test()
{
	cout<<"CONSTRUCTOR IS CALLED"<<endl;
	num1=0;
	num2=0;
}
void test :: display()
{
	cout<<"YOUR NUM1 IS"<<"  :  "<<num1<<endl;
	cout<<"YOUR NUM2 IS"<<"  :  "<<num2<<endl;
}
test :: ~test()
{
	cout<<"DESTRUCTOR IS CALLED"<<endl;
}
int main()
{
    test t1(2,3);
    t1.setnum1(23);
    t1.setnum2(24);
    t1.display();
    return 0;
}

