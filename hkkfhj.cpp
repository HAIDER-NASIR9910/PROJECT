#include <iostream>
using namespace std;
class test{
	private:
	int num1;
	public:
	test(int n1){
		num1=n1;
	}
	void operator++()
	{
		num1++;
	}
	void operator++(int)
	{
		++num1;
	}
	
	void print()
	{
		cout<<"YOUR NUMBER IS"<<"::"<<num1<<endl;
	}
	
};
int main()
{
	test t1(5);
	t1.print();
	++t1;
	t1.print();
	t1++;
	t1.print();

    return 0;
}

