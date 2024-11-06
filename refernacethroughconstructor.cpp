#include <iostream>
using namespace std;
class test{
	int &num1;
	public:
	test(int n1) : num1(n1){
		
	}
	void print()
	{
		cout<<"NUM IS"<<" : "<<num1<<endl;
	}
};
int main()
{
	test t1(3);
	t1.print();
    return 0;
}

