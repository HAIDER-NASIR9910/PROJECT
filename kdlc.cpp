#include <iostream>
using namespace std;
class A{
	private:
	int num;
	public:
	A(int n)
	{
		cout<<"constructor is called"<<endl;
		num=n;
	}
	void display()
	{
		cout<<"YOUR NUMBER IS"<<" : "<<num;
	}
	
};
int main()
{
	A t(2);
	t.display();
}
