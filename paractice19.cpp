#include <iostream>
using namespace std;
class A{
	private:
	int num1;
	int num2;
	public:
	A (){
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	void setdata(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	void displaydata()
	{
		cout<<"YOUR NUM 1 IS"<<" : "<<num1<<endl;
		cout<<"YOUR NUM 2 IS"<<" : "<<num2<<endl;
	}
	~A(){
		cout<<"DECONSTRUCTOR IS CALLLED"<<endl;
	}
	A operator +(A a2){
	A a3;
	a3.num1=num1+a2.num1;
	a3.num2=num2+a2.num2;
	return a3;	
	}
	void sum()
	{
		cout<<"YOUR SUM FOR NUM1 IS"<<" : "<<num1<<endl;
		cout<<"YOUR SUM FOR NUM2 IS"<<" : "<<num2<<endl;
	}
	
};
int main()
{
	A a1,a2;
	a1.setdata(2,4);
	a1.displaydata();
	a2.setdata(4,8);
	a2.displaydata();
	A sum=a1+a2;
	sum.sum();
	return 0;
}
