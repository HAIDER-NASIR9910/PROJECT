#include <iostream>
using namespace std;
class A{
	private:
	int num;
	public:
	int set(int n)
	{
		num=n;
		cout<<"NUM IS A "<<" : "<<num<<endl;
		return n;
	}
};
class B : public A{
	private:
	int num;
	public:
	virtual int set(int n)  override{
	 	num=n;
		cout<<"NUM IS B"<<" : "<<num<<endl;
		return n;
	}
};
int main()
{
    B b;
    b.set(9);
    return 0;
}

