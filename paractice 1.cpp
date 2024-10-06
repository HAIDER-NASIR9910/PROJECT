#include <iostream>
using namespace std;
struct A{
	int x;
	int y;
};
struct B{
	char a;
	A v1;
};
int main()
{
	B record;
	cout<<"enter a charcater"<<endl;
	cin>>record.a;
	cout<<"ENTER A VALUE OF X"<<endl;;
	cin>>record.v1.x;
	cout<<"ENTER A VALUE OF y"<<endl;;
	cin>>record.v1.y;
	B *ptr=&record;	
	cout<<ptr->v1.x<<endl;
	cout<<ptr->v1.y<<endl;
	cout<<ptr->a<<endl;
}
