#include <iostream>
using namespace std;
void func1()
{
  int n=4;
  int *ptr = &n;
  cout<<*ptr<<endl;
  *ptr=5;

  	
}
int main()
{

	func1();
	func1();
}
