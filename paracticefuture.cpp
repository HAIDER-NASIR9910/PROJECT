#include <iostream>
using namespace std;
class Measurement{
	private:
	float kms;
	float meters;
	public:
	Measurement(){
	}
	Measurement(float k,float m)
	{
		kms=k;
		meters=m;
	}
	void setdata(float k,float m)
	{
		kms=k;
		meters=m;		
	}
	void display()
	{
		cout<<"TOTAL KMS ARE"<<" : "<<kms<<endl;
		cout<<"TOTAL METERS ARE"<<" : "<<meters<<endl;
	}
	Measurement operator -(Measurement m2)
	{
		Measurement m3;
		m3.kms=kms-m2.kms;
		m3.meters=meters-m2.meters;
		return m3;
	}
};
int main()
{
	Measurement m1;
	m1.setdata(2.3,3.2);
	Measurement m2;
	m2.setdata(3.2,2.3);
	Measurement sum=m1-m2;
	sum.display();
    return 0;
}

