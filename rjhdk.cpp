#include <iostream>
using namespace std;
void func2(int *ptr,int *ptr1, int *ptr2)
{
   cout<<ptr<<endl;
  cout<<&*ptr<<endl;
  cout<<*&ptr<<endl;
  cout<<*ptr<<endl;
  cout<<&ptr<<endl;
  
    cout<<ptr1<<endl;
  cout<<&*ptr1<<endl;
  cout<<*&ptr1<<endl;
  cout<<*ptr1<<endl;
  cout<<&ptr1<<endl;
  
  cout<<ptr2<<endl;
  cout<<&*ptr2<<endl;
  cout<<*&ptr2<<endl;
  cout<<*ptr2<<endl;
  cout<<&ptr2<<endl;
}
int main()
{
	int a=9;
	int b=8;
	int c=7;
	func2(&a, &b, &c);
	
}
