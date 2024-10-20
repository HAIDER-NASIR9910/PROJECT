#include <iostream>
using namespace std;
struct rect{
	int length;
	int width;
	void area()
	{
		cout<<"THE AREA OF THE RECTANGLE IS"<<" : "<<length*width<<endl;
	}
};
struct perimeter{
	int length;
	int width;
	int length2;
	int width2;	
	rect r1;
	void peri()
	{
		cout<<"PERIMETER OF THE RECTABLE IS"<<" : "<<length+length2+width+width;
	}
};
int main()
{
	rect A;
	rect *ptr= new rect;
	cout<<"ENTER THE LENGTH OF THE RECTANGLE"<<endl;
	cin>>ptr->length;
	cout<<"ENTER THE WIDTH OF THE RECTANGLE"<<endl;
	cin>>ptr->width;
	ptr->area();
	delete ptr;
	perimeter p1;
	cout<<"ENTER THE ONCE SIDE"<<endl;
	cin>>p1.length;
	cout<<"ENTER THE OTHER SIDE"<<endl;
	cin>>p1.length2;
    cout<<"ENTER THE ONCE SIDE"<<endl;
	cin>>p1.width;
	cout<<"ENTER THE OTHER SIDE"<<endl;
	cin>>p1.width2;
	cout<<"-------------------PERIMETER----------------"<<endl;
	p1.peri();
	cout<<endl;
    p1.r1.area();
    return 0;
}

