#include <iostream>
using namespace std;
class A{
	private:
	
	public:
		int num;
	void setdata(int n)
	{
		num=n;
	}
	friend void displaydata(A a1);
};
	void displaydata (A a1)
	{
		cout<<"YOUR NUM IS"<<" : "<<a1.num<<endl;
	}
int main()
{
   A a1;
   a1.setdata(78);	
   displaydata(a1);
   return 0;
}
