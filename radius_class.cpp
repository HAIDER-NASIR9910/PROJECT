#include <iostream>
using namespace std;
class circle{
	int radius;
	public:
	void get()
	{
		cout<<"ENTER THE RADIUS"<<endl;
		cin>>radius;
	}
	int setradius(int r1)
	{
		radius=r1;
		return radius;
	}
	int area()
	{
		return 3.14*radius*radius;
	}
};
int main()
{
    circle c1;
    circle *ptr= new circle;
    ptr->get();
    cout<<ptr->area() <<endl;
    cout<<"-----------new---------------"<<endl;
    ptr->setradius(12);
    cout<<ptr->area()<<endl;
    return 0;
}

