#include <iostream>
using namespace std;
class A{
	private:
	
	public:
		int num;
	void setdata(int n)
	{
		n=num;
	}
	friend void displaydata(A a1);
};
	void displaydataA (A a1)
	{
		cout<<"YOUR NUM IS"<<" : "<<a1.num<<endl;
	}
int main()
{
   A a1;	
   displaydata(a1);
   
}
