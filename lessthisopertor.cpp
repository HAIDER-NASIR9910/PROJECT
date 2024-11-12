#include <iostream>
using namespace std;
class A{
	private:
	int num1;
	int num2;
	public:
	void sedata(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	A operator <(A a2)
	{
		A a3;
		a3.num1=(a2.num1<num1)?num1: 0 ;
		a3.num2=(a2.num2<num2) ?num2: 0 ;
		return a3;
		
	}
	
    A operator>(A a2){
    A a3;
    a3.num1 = (a2.num1 > num1) ? a2.num1 : 0;
    a3.num2 = (a2.num2 > num2) ? a2.num2 : 0;
    return a3;
    }
 
	void print()
	{
		cout<<"NUM1 IS"<<" : "<<num1<<endl;
		cout<<"NUM2 IS"<<" : "<<num2<<endl;
	}
};
int main()
{
	A a1;
	a1.sedata(5,6);
	A a2;
	a2.sedata(6,5);
	A greater=a1<a2;
	greater.print();
	A lessthan=a1>a2;
	lessthan.print();
		

    return 0;
}

