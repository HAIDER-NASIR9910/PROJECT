#include <iostream>
using namespace std;
struct rect_are{
	int length;
	int width;
	void getdata()
	{
		cout<<"enter the length"<<endl;
		cin>>length;
		cout<<"enter the width"<<endl;
		cin>>width;
	}
	void area()
	{
		cout<<"the area is"<<" : "<<length*width<<endl;
	}
};
struct rect_peri{
	int length2;
	int width2;
		void getdata2()
	{
		cout<<"enter the length"<<endl;
		cin>>length2;
		cout<<"enter the width"<<endl;
		cin>>width2;
	}
	void peri()
	{

		cout<<"the area is"<<" : "<<2*(length2+width2)<<endl;
	}
};
int main()
{
	rect_are A;
	A.getdata();
	A.area();
	rect_peri P;
	P.getdata2();
	P.peri();
	

    return 0;
}

