#include <iostream>
using namespace std;
void func1(int n)
{
  int *ptr = &n;
  cout<<ptr<<endl;
  cout<<&*ptr<<endl;
  cout<<*&ptr<<endl;
  cout<<*ptr<<endl;
  cout<<&ptr<<endl;
  	
}
int main()
{
	int a;
	cout<<"ENTER ANY NUMBER "<<endl;
	cin>>a;
	func1(a);
}
