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
		return 1*house_bill;
	}
	int get(int house_bill)
	{
		return 1*house_bill;
	}	
	float set(float c)
	{
		commercial_bill=c;
		return 1.5*commercial_bill;
	}
	float get(float commercial_bill)
	{
		return 1.5*commercial_bill;
	}
	double set(double  i)
	{
		industry_bill=i;
		return 2.5*industry_bill;
	}
	double get(double industry_bill)
	{
		 return 2.5*industry_bill;
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
	calculate_bills c1(200,200.2,200.2222222);
	
	cout<<"HOUSE BILL IS"<<"  :  "<<c1.set(200)<<endl;          //int
	cout<<"COMMERCIAL BILL IS"<<"  :  "<<c1.set(200.2)<<endl;        //double
	cout<<"INDUSTRY BILL IS"<<"  :   "<<c1.set(200.2222222)<<endl;       //float
	//c1.print();
    return 0;
}
