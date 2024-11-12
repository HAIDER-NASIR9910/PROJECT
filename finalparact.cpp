#include <iostream>
using namespace std;
class test{
	private:
	const int num1;
	const int num2;
	const int num3;
	static int count;
	public:
	test(int n1,int n2,int n3):num1(n1),num2(n2),num3(n3)
	{
		count++;
	}
	void display() const{
		cout<<"NUM1 IS"<<" : "<<num1<<endl;
		cout<<"NUM2 IS"<<" : "<<num2<<endl;
		cout<<"NUM3 IS"<<" : "<<num3<<endl;
	}
	
	
};
int test :: count=0;
int main()
{
	test t1(1,2,3);
	t1.display();
	test t2(2,3,4);
	t2.display();
	

    return 0;
}

