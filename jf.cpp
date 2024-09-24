#include <iostream>
using namespace std;
void func1(int n)
{
	cout<<"your num is"<<" : "<<n*n<<endl;
}
void func2(int *n)
{
	cout<<"your num is"<<" : "<<*n * *n<<endl;
}
int main()
{
	int num=5;
	func1(num);
	func2(&num);
}
