#include <iostream>
using namespace std;
class complex{
	private:
	int real;
	int imaginary;
	public:
	complex ()
	{
		//cout<<"DEFUALT CONSTRUCTOR IS CALLED"<<endl;
	}
	complex(int r,int i)
	{
		real=r;
		imaginary=i;		
	}
	void setdata(int r,int i)
	{
		real=r;
		imaginary=i;
	}

	complex operator +(complex c2)
	{
		complex c3;
		c3.imaginary=imaginary+c2.imaginary;
		c3.real=real+c2.real;
		return c3;
	}
	complex operator -(complex c2)
	{
		complex c3;
		c3.imaginary=imaginary-c2.imaginary;
		c3.real=real-c2.real;
		return c3;		
	}
	void print()
	{
		cout<<"REAL PART OF THIS IS"<<" : "<<real<<endl;
		cout<<"IMAGINARY PART OF THIS IS"<<" : "<<imaginary<<endl;
	}
	
	
};
int main()
{
	complex c1(2,3);
	//c1.setdata(2,3);
	complex c2(3,2);
	//c2.setdata(3,2);
	complex c4;
	c4=c1+c2;
	c4.print();
	complex c5;
	c5=c1-c2;
	c5.print();

    return 0;
}

