#include <iostream>
using namespace std;
struct num{
	int num;
	int num2;
};
num func1(int num1, int num2)
{
	num n1;
	n1.num=num1;
	n1.num2=num2;
	return n1;
	
}
num func2(num n1)
{
	cout<<n1.num<<endl;
	cout<<n1.num2<<endl;
}

int main()
{
	num n1;

	n1=func1(3,4);
	func2(n1);
}
