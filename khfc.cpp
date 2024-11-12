#include <iostream>
using namespace std;
class circle{
	private:
	int radius;
	int diameter;
	public:
	circle()
	{
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	void setdata(int r,int d)
	{
		radius=r;
		diameter=d;
	}
	int getarea()
	{
		return 3.14*radius*radius;
	}
	int circumferance()
	{
		return 2*3.14*radius;
	}
	int getradius(int r)
	{
		radius=r;
		return radius;
	}
	int getdiamter(int d)
	{
		diameter=d;
		return diameter;
	}
	
};
int main()
{
	circle c1;
	c1.setdata(2,3);
	cout<<c1.getarea()<<endl;
	cout<<c1.circumferance()<<endl;
	cout<<"-----------------------------"<<endl;
	circle *c2=new circle(c1);
	cout<<c2->getarea()<<endl;
	cout<<c2->circumferance()<<endl;
	cout<<"------------------------------"<<endl;
	circle *c3=&c1;
	cout<<c3->getarea()<<endl;
	cout<<c3->circumferance()<<endl;
	

    return 0;
}

