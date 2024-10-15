#include <iostream>
using namespace std;
class A{
	private:
	int num;
	public:
	virtual void set(int n)
	{
		num=n;
		cout<<"YOUR NUM IS"<<" : "<<num*num<<endl;
	}
};
class B: public A{
	private:
	int num;
	public:
    void set(int n) override
	{
		num=n;
		cout<<"YOUR NUM IS"<<" : "<<num-3<<endl;
	}
};

int main()
{
   B  b;
   b.set(4);
}
