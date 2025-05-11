#include <iostream>
using namespace std;
class numbers{
	int num1;
	int num2;
	public:
	numbers(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	int setnum1(int n1)
	{
		num1=n1;
		return num1;
	}
	int getnum1()
	{
		return num1;
	}
	int setnum2(int n2)
	{
		num2=n2;
		return num2;
	}
	int getnum2()
	{
		return  num2;
	}
	void operator +(numbers n2)
	{
		this->num1=this->num1+n2.num1;
		this->num2=this->num2+n2.num2;
	}
	void print()
	{                          
		cout<<"NUM1 IS"<<" : "<<num1<<endl;
		cout<<"NUM2 IS"<<" : "<<num2<<endl;
	}
	
};
void operator -(numbers n1,numbers n2)
{
	n2.setnum1(n1.getnum1()-n2.getnum1());
	n2.setnum2(n1.getnum2()-n2.getnum2());
	
}
int main()
{
	numbers n1(2,5);
	numbers n2(5,2);
	n1+n2;
	n1.print();
	n1-n2;
	n1.print();
	

    return 0;
}

