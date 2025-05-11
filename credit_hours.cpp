#include <iostream>
using namespace std;
class credit_hours{
	private:
	int a;
	int b;
	int c;
	public:
	credit_hours(int q,int y,int x):a(q),b(y),c(x){}
	credit_hours operator +(credit_hours c2)
	{
		credit_hours c3(0,0,0);
		c3.a=a+c2.a;
		c3.b=b+c2.b;
		c3.c=c+c2.c;
		return c3;
	}
	void display()
	{
		cout<<"TOTAL CREDIT HOURS ARE"<<" : "<<a+b+c<<endl;
	}
};
int main()
{
	credit_hours c1(1,2,3);
	credit_hours c2(2,3,4);
	credit_hours c3=c1+c2;
	c3.display();

    return 0;
}

