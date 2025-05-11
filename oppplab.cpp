#include <iostream>
using namespace std;
class calculate_bills{
	private:
	int house_bill;
	float commercial_bill;
	double industry_bill;
	public:
	calculate_bills(int h,float c,double i)
	{
		house_bill=h;
		commercial_bill=c;
		industry_bill=i;
	}
	int set(int h)
	{
		house_bill=h;
		return house_bill;
	}
	int get(int house_bill)
	{
		return house_bill;
	}	
	float set(float c)
	{
		commercial_bill=c;
		return commercial_bill;
	}
	float get(float commercial_bill)
	{
		return commercial_bill;
	}
	double set(double  i)
	{
		industry_bill=i;
		return industry_bill;
	}
	double get(double industry_bill)
	{
		 return industry_bill;
	}
	void print()
	{
		cout<<"HOUSE BILL IS"<<" : "<<house_bill*1<<endl;
		cout<<"COMMERCIAL BILL IS"<<" : "<<commercial_bill*1.5<<endl;
		cout<<"INDUSTRY BILL IS"<<" : "<<industry_bill*2.5<<endl;
	}
};
int main()
{
	calculate_bills c1(200,200.2,200.2222);
	c1.set(200);          //int
	c1.set(200.2);        //double
	c1.set(200.2222222);       //float
	c1.print();
    return 0;
}
