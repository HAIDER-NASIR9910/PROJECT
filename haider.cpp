//HAIDER NASIR
//B24S0308AI088
//ASSIGMENT # 1
// AI (BLUE)
#include <iostream>
using namespace std;
class circle{
	private:
	float radius;
	public:
	circle()
	{
		cout<<"DEFUALT CONSTRUCTOR IS CALLED"<<endl;
		radius=0;
		
	}
	int setRadius(float r)
	{
		radius=r;
	}
	float getarea()
	{
		cout<<"AREA OF THE CIRCLE IS"<<" : "<<endl;
		return 3.14159 * radius * radius ;
	}

	circle(int r)
	{
		cout<<"CONSTRUCTOR OVERLOADIND IS CALLED WHICH ACCEPT THE ARGUMENT"<<endl;
		radius=r;
	}
	   float getRadius() {
        return radius;
    }

};
int main()
{
	circle c1[5];
    c1[0].setRadius(12);
    c1[1].setRadius(7);
    c1[2].setRadius(9);
    c1[3].setRadius(14);
    c1[4].setRadius(8);
    for(int i=0; i<5; i++)
    {
    	cout << "Radius: " << c1[i].getRadius() << endl;
    	cout<<"AREA"<<" : "<<c1[i].getarea();	
    	cout<<"-------------next one--------------"<<endl;
    	cout<<endl;
	}
    return 0;
}
