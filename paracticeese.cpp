#include <iostream>
using namespace std;
class Point{
	protected:
	int x;
	int y;
	public:
	point(){}
	Point(int x1,int y1):x(x1),y(y1){}
	void setx(int x1)
	{
		x=x1;
	}
	int getx()
	{
		return x;
	}
	void sety(int y1)
	{
		y=y1;
	}
	int gety()
	{
		return y;
	}
	virtual void print()
	{
		cout<<"X IS"<<" : "<<x<<endl;
		cout<<"Y IS"<<" : "<<y<<endl;
	}
	
	virtual int getarea()
	{
		return x*y;
	}
};

class triangle:public Point{
	protected:
	int z;
	public:
	triangle(int x1,int y1,int z1):Point(x1,y1){
		z=z1;
	}
	void setz(int z1)
	{
		z=z1;
	}
	int getz()
	{
		return z;
	}	
	virtual void print()
	{
		cout<<"X IS"<<" : "<<x<<endl;
		cout<<"Y IS"<<" : "<<y<<endl;		
		cout<<"Z IS"<<" : "<<z<<endl;
	}
	virtual int getarea()
	{
		return x*y*z;
	}
	
};

class rectangle :public triangle{
	protected:
	int h;
	public:
	rectangle(int x1,int y1,int z1,int h1):triangle(x1,y1,z1){
		
		h=h1;
	}
	virtual void print()
	{
		cout<<"X IS"<<" : "<<x<<endl;
		cout<<"Y IS"<<" : "<<y<<endl;
		cout<<"Z IS"<<" : "<<z<<endl;		
		cout<<"H IS"<<" : "<<h<<endl;
	}
	virtual int getarea()
	{
		return x*y*z*h;
	}
};
int main()
{
	Point *ptr;
	rectangle rect(1,2,3,4);
	triangle tri(1,2,3);
	ptr=&rect;
	ptr->print();
	cout<<endl;
	ptr=&tri;
	ptr->print();
}
