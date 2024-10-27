#include <iostream>
using namespace std;
class rect{
	private:
	int length;
	int width;
	public:
	rect (int l, int w)
	{
		length=l;
		width=w;
	}
	int getlength(int l)
	{
		length=l;
		return length;
	}
	int getwidth(int w)
	{
		width=w;
		return width;
	}
	void print()
	{
		cout<<"YOUR AREA IS"<<" : "<<endl;
		cout<<length*width<<endl;
	}
	
};
int main()
{
	rect  r1(1,2);
	r1.print();

    return 0;
}

