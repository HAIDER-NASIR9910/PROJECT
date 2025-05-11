#include <iostream>
using namespace std;
class circle{
	float radius;
	public:
	circle(){
	}
	circle(float r)
	{
		radius=r;
	}
	float setradius(float r)
	{
		radius=r;
		return radius;
	}
	float getradius()
	{
		return radius;
	}
	circle operator +(circle c2)
	{
		circle c3;
		c3.radius=radius+c2.radius;
		return c3;
	}
	void printsums()
	{
		cout<<"SUM OF THE ALL RADIUS OF THE ABOJECTS ARE"<<" : "<<radius<<endl;
	}
};

int main()
{
	circle c1;
	c1.setradius(2.2);
	circle c2;
	c2.setradius(2.3);
	circle c3=c1+c2;
	c3.printsums();

    return 0;
}

