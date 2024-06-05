#include <iostream>
using namespace std;
struct circle{
	float radius;
};
void  setradius(circle &c, float r)
{
	c.radius=r;

}
void printcircle(circle c)
{
	cout<<"THE RADIUS OF THE CIRCLE IS"<<" : "<<c.radius;
}
int main()
{
	circle c;
	setradius(c,6);
	printcircle(c);
	
     
	
}
