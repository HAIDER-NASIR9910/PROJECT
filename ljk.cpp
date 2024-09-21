#include <iostream>
using namespace std;
class test{
	private:
	int num1;
	int num2;
	public:
	friend void get(test t1);
	friend void display(test t1);
	friend void get2(test t2);
	friend void display2(test t2);
	 //friend test operator +(test t2)
	 void display3()
{
	cout<<"SUM OF THE FIRST NUMBERS ARE"<<" : "<<num1<<endl;
	cout<<"SUM OF THE SECOND NUMBERS ARE"<<" : "<<num2<<endl;
}
	 	 //friend void display3(test t3);
	 test operator +(test t2)

{
	test t3;
	t3.num1=num1+t2.num1;
	t3.num2=num2+t2.num2;
	return t3;
}
	test()
	{
		num1=0;
		num2=0;
	}
};
void get(test t1)
{
	cout<<"ENTER THE NUM1"<<t1.num1<<endl;
	cin>>t1.num1;
	cout<<"ENTER THE NUM2"<<t1.num2<<endl;
	cin>>t1.num2;
}
void display(test t1)
{
	cout<<"NUM1 IS"<<" : "<<t1.num1<<endl;
	cout<<"NUM2 IS"<<" : "<<t1.num2<<endl;
}
void get2(test t2)
{
	cout<<"ENTER THE NUM1"<<t2.num1<<endl;
	cin>>t2.num1;
	cout<<"ENTER THE NUM2"<<t2.num2<<endl;
	cin>>t2.num2;
}
void display2(test t2)
{
	cout<<"NUM1 IS"<<" : "<<t2.num1<<endl;
	cout<<"NUM2 IS"<<" : "<<t2.num2<<endl;
}

int main()
{
	test t1,t2;
	t1.get(t1);
	t1.display(t1);
	t2.get2(t2);
	t2.display2(t2);
	test sum;
	sum=t1+t2;
	sum.display3();
	
	
}
