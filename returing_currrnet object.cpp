#include <iostream>
using namespace std;
class test{
	private:
	int num1;
	int num2;
	int num3;
	public:
	test(int n1,int n2,int n3)
	{
		num1=n1;
		num2=n2;
		num3=n3;
	}
	test getnum1(int n1){
		num1=n1;
		return *this;
	}
	test getnum2(int n2){
		num2=n2;
		return *this;
	}
	test getnum3(int n3){
		num2=n3;
		return *this;
	}
	void display(){
		cout<<"YOUR NUM1 IS"<<" : "<<num1<<endl;
		cout<<"YOUR NUM2 IS"<<" : "<<num2<<endl;
		cout<<"YOUR NUM3 IS"<<" : "<<num3<<endl;		
	}
	
	
};
int main()
{
	test t1(3,4,5);
	t1.getnum1(1).getnum2(3).getnum3(3);
	t1.display();
    return 0;
}

