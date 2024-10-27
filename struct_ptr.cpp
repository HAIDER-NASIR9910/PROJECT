#include <iostream>
using namespace std;
struct circle{
	int radius;
	int area()
	{
		return 14.13*radius*radius;
	}
};
int main()
{
	circle c1;
	circle *ptr= new circle(c1);
	cout<<"ENTER THE RADIUS"<<endl;
	cin>>ptr->radius;
	cout<<"THE AREA  OF THE CIRCLE IS"<<endl;
	cout<<ptr->area();

    return 0;
}

