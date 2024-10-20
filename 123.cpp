#include <iostream>
using namespace std;
struct A{
	int length;
	int width;
	void area()
	{
		cout<<"AREA OF THE RECTANGLE IS"<<" : "<<length*width<<endl;
	}
};
struct B{
	A a;
};
int main()
{
	B b;
	cout<<"ENTER THE LENGTH"<<endl;
	cin>>b.a.length;
	cout<<"ENTER THE WIDTH"<<endl;
	cin>>b.a.width;
	cout<<"-----------------------AREA-----------------------"<<endl;
	b.a.area();
    cout<<"-----------------------NEW------------------------"<<endl;
    A *ptr;
    cout<<"ENTER THE LENGTH"<<endl;
    cin>>ptr->length;
	cout<<"ENTER THE WIDTH"<<endl;    
    cin>>ptr->width;
    ptr->area();
    return 0;
}

