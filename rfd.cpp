#include <iostream>
using namespace std;
class test{
	private:
	int num;
	int num2;
	public:
	test()
	{
		num=0; 
		num2=0;
	}
	void get()
{
	cout<<"ENTER THE NUM"<<endl;
	cin>>num;
	cout<<"ENTER THE NUM2"<<endl;
	cin>>num2;
}
void display()
{
	cout<<"YOUR NUM1 IS "<<" : "<<num<<endl;
	cout<<"YOUR NUM2 IS"<<" : "<<num2<<endl;
}
test operator +(test t2)
{
	test t3;
	t3.num=num+t2.num;
	t3.num2=num2+t2.num2;
	return t3;
}


};

int main()
{
	test t1,t2;
	t1.get();
	t1.display();
	t2.get();
	t2.display();
	test sum;
	sum=t1+t2;
	sum.display();
	
}
