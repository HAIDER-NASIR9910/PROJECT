#include <iostream>
using namespace std;
class detector{
	private:
	float km;
	float inches;
	public:
	detector ()
	{
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	~detector()
	{
		cout<<"DECONSTRUCTOR IS CALLED"<<endl;
	}
	void setdata(float k, float i)
	{
		km=k;
		inches=i;
	}
	void display()
	{
		cout<<"YOUR KILOMETERS ARE"<<" : "<<km<<endl;
		cout<<"YOUR INCHES ARE"<<" : "<<inches<<endl;
	}
	void sum()
	{
		cout<<"YOUR SUM OF KM IS"<<" : "<<km<<endl;
		cout<<"YOUR SUM OF INCHES IS"<<" : "<<inches<<endl;
	}
	detector operator +(detector d2)
	{
		detector d3;
		d3.inches=inches+d2.inches;
		d3.km=km+d2.km;
		return d3;
	}
};

int main()
{
   detector d1,d2;
   d1.setdata(2.5,4.5);
   d1.display();
   d2.setdata(3.7,3.9);
   d2.display();
   detector sum=d1+d2;
   sum.sum();
}
