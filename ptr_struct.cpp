#include <iostream>
using namespace std;
struct rect{
	int length;
	int width;
	void area()
	{
		cout<<"YOUR ARE IS"<<endl;
		cout<<length*width<<endl;
	}
};
int main()
{
	rect r1;
	rect *ptr=new rect(r1);
	cin>>ptr->length;
	cin>>ptr->width;
	ptr->area();
	

    return 0;
}

