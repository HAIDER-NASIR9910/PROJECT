#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the value a"<<" : "<<endl;
	cin>>a;
	int *ptr=&a;
	cout<<*&ptr<<endl;
	cout<<&*ptr<<endl;
	cout<<*ptr<<endl;
	
}
