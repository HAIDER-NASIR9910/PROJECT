#include <iostream>
using namespace std;
class rectangle{
	private:
	int length;
	int width;
	public:
	rectangle()
	{
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	void setdata(int l,int w)
	{
		length=l;
		width=w;
	}
	~rectangle()
	{
		cout<<"DESTRUCTOR IS CALLED"<<endl;
	}
	int getarea()
	{
		return length*width;
	}
	void printdata()
	{
		cout<<"LENGTH IS"<<" : "<<length<<endl;
		cout<<"WIDTH IS"<<" : "<<width<<endl;
	}
	void printarea()
	{
		cout<<"YOUR AREA IS"<<endl;
	}
};
int main()
{
	rectangle *r1=new rectangle;
	r1->setdata(2,3);
	r1->printdata();
	r1->printarea();
	cout<<r1->getarea();
    return 0;
}

