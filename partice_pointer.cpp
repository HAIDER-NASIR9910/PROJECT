#include <iostream>
using namespace std;
class rect_area{
	protected:
	int length;
	int width;
	public:
	void get(int l, int w)
	{
		length=l;
		width=w;
	}
	int selength(int l)
	{
		length=l;
		return length;
	}
	int setwidth(int w)
	{
		width=w;
		return width;
	}
	void area()
	{
		cout<<"THE AREA OF THE RECTANGLE IS"<<" : "<<length*width<<endl;
	}
};
class rect_peri: protected rect_area{
	private:
	int length2;
	int width2;
	public:
	void get2(int l, int w)
	{
		length2=l;
		width2=w;
	}
	int selength(int l)
	{
		length2=l;
		return length2;
	}
	int setwidth(int w)
	{
		width2=w;
		return width2;
	}
	void perimeter()
	{
		cout<<"THE PERIMETER OF THE RECTANGLE IS"<<" : "<<2*(length2+width2) <<endl;
		
	}	
};
int main()
{
	cout<<"----------------AREA-----------------"<<endl;
	rect_area A;
	A.get(2,3);
	A.area();
	cout<<"----------------PERIMETER-----------------"<<endl;
	rect_peri P;
	P.get2(2,3);
	P.perimeter();
    return 0;
}

