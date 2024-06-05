#include <iostream>
using namespace std;
struct rectangle{
	int length;
	int width;
};
int  func2(rectangle Rectangle,int r)
{
	r=Rectangle.length;
     r=4;
	r=Rectangle.width;
    return r;
}
void func1(rectangle Rectangle)
{
		cout<<"THE VALUE OF THE LENGTH IS"<<Rectangle.length<<endl;
		cout<<"THE VALUE OF THE WIDTH IS"<<Rectangle.width<<endl;
}

int main()
{
	rectangle Rectangle;
	int r;
	r=3; 
	func2(Rectangle,r);
	func1(Rectangle);
	
}
