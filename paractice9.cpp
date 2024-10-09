#include <iostream>
using namespace std;
class A{
	private:
	int inches;
	int length;
	public:
	void set(int in)
	{
		inches=in;
	}
	void get(int len)
	{
		length=len;
	}
	 A operator +(A a2)
	 {
	 	A a3;
	 	a3.inches=inches+a2.inches;
	 	a3.length=length+a2.length;
	 	return a3;
	 }
	 void inchessum()
	 {
	 	cout<<"YOUR SUM IS"<<" : "<<endl;
	 	cout<<inches<<endl;
	 }
	 	 void lengthsum()
	 {
	 	cout<<"YOUR SUM IS"<<" : "<<endl;
	 	cout<<length<<endl;
	 }
};

int main()
{
	A a1,a2;
	a1.get(10);
	a1.set(10);
	a2.get(20);
	a2.set(20);	
	A sum=a1+a2;
	sum.inchessum();
	sum.lengthsum();
	
	
}
