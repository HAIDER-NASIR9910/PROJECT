#include <iostream>
using namespace std;
class rect{
	private:
	int *length;
	int *width;
	public:
	rect (int l, int w)
	{
		length=new int(l);
		width=new int(w);
	}
	int getlength(int l)
	{
		length=new int(l);
		return *length;
	}
	int getwidth(int w)
	{
		width=new int(w);
		return *width;
	}
	void print()
	{
		cout<<"YOUR AREA IS"<<" : "<<endl;
		cout<<(*length)*(*width)<<endl;
	}
	~rect()
	{
		delete length;
		delete width;
		cout<<"OBJECT DESTROYED"<<endl;
	}
	
};
int main()
{
	rect  r1(6,2);
	r1.print();

    return 0;
}
