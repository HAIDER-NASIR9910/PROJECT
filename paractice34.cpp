#include <iostream>
using namespace std;
class test{
	private:
	int num1;
	int num2;
	public:
	test(int n1,int n2)
	{
		num1=n1;
		num2=n2;
		cout<<"YOUR NUM 1 IS"<<" : "<<num1<<endl;
		cout<<"YOUR NUM 2 IS"<<" : "<<num2<<endl;
	}
};
int main()
{
	test t(2,3);
	return 0;
}
