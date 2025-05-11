#include <iostream>
using namespace std;
class point{
	protected:
	int x;
	int y;
	public:
	point(int a,int b):x(a),y(b){}
	void display()
	{
		cout<<"POINT X IS"<<" : "<<x<<endl;
		cout<<"POINT Y IS"<<" : "<<y<<endl;
	}
	
};
class circle: public point{
	protected:
	int z;
	public:
	circle(int a,int b,int c):z(c),point(a,b){}
	void display()
	{
		point::display();
		cout<<"POINT Z IS"<<" : "<<z<<endl;
	}
};
class rectangle : public circle{
	protected:
	int r;
	public:
	rectangle(int a,int b,int c,int d):r(d),circle(a,b,c){}
	void display()
	{
		circle::display();
		cout<<"R POINT IS"<<" : "<<r<<endl;
	}
};
int main()
{
	rectangle r1(1,2,3,4);
	r1.display();

    return 0;
}

