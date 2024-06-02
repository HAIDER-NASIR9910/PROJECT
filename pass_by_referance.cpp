#include <iostream>
using namespace std;
void func1(int *p1, int *p2)
{
	cout<<*p1<<endl;
	cout<<*p2<<endl;
	*p1=23;
	*p2=12;
}
int main()
{
  int a=3;
  int b=4;
  func1(&a, &b); 
  cout<<"CHANGE THROUUGH PASS BY REFERANCE--------"<<endl; 
  cout<<a<<endl;
  cout<<b<<endl;
}
