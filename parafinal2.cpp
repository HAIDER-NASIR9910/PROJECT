#include <iostream>
using namespace std;
class measurement{
	private:
	float km;
	float meters;
	public:
	measurement()
	{
		cout<<"DEFUALT CONSTRUCTOR IS CALLED"<<endl;
	}
	~measurement()
	{
		cout<<"DEFULAT DESTRUCTOR IS CALLED"<<endl;
	}
	measurement(float k,float m)
	{
		km=k;
		meters=m;
	}
	void setkm(float k)
	{
		km=k;
	}
	void setmeters(float m)
	{
		meters=m;
	}
	float getkm(float k)
	{
		km=k;
		return km;
	}
	float getmeters(float m)
	{
		meters=m;
		return meters;
	}
	measurement operator +(measurement m2)
	{
		measurement m3;
		m3.km=km+m2.km;
		m3.meters=meters+m2.meters;
		return m3;
	}
	void setdata(float k,float m)
	{
		km=k;
		meters=m;
	}
	void print()
	{
		cout<<"KM ARE"<<" : "<<km<<endl;
		cout<<"METERS ARE"<<" : "<<meters<<endl;
	}
	void printdata()
	{
		cout<<"TOTAL KILOMETERS ARE"<<" : "<<km<<endl;
		cout<<"TOTAL METERS ARE"<<" : "<<meters<<endl;
	}
};
int main()
{
	measurement m1;
	m1.setdata(2.3,3.2);
	m1.print();
	measurement m2;
	m2.setdata(3.2,2.3);
	m1.print();
	measurement sum=m1+m2;
	sum.printdata();
    return 0;
}

