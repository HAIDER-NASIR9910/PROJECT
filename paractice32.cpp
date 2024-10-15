#include <iostream>
using namespace std;
class num{
	private:
	int num1;
	float num2;
	public:
	void func(int n1,float n2)
	{
		num1=n1;
		num2=n2;
		cout<<"YOUR NUMBER IS"<<" : "<<	num1<<endl;
		cout<<"YOUR NUMBER IS"<<" : "<<num2<<endl;	
	}
	void func(float n3, int n4)
	{
		num1=n3;
		num2=n4;
		cout<<"YOUR NUMBER IS"<<" : "<<	num1<<endl;
		cout<<"YOUR NUMBER IS"<<" : "<<num2<<endl;	
	}
};
int main()
{
	num n;
	n.func(2,2.3);
	n.func(2.3,4);
	return 0;
}
