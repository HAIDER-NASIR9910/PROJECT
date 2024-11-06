#include <iostream>
using namespace std;
class test{
	int num1;
	int num2;
	public:
	test(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	int getnum1(int n1)
	{
		num1=n1;;
		this->num1;
		return num1;
	}
	int getnum2(int n2)
	{
		num2=n2;;
		this->num2;
		return num2;
	}
    	void display(){
		cout<<"YOUR NUM1 IS"<<" : "<<num1<<endl;
		cout<<"YOUR NUM2 IS"<<" : "<<num2<<endl;		
	}
};
int main()
{
	test t1(2,4);
	t1.display();
	t1.getnum1(3);
	t1.getnum2(5);
	t1.display();
	

    return 0;
}

