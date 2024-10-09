#include <iostream>
using namespace std;
class test{
	private:
	int num;
	public:
    void getdata (int n)
    {
    	num=n;
	}
	friend void displaydata(test t1);
};
void displaydata(test t1)
{
	cout<<"YOUR NUM IS"<<" : "<<t1.num;
}
int main()
{
	test t1;
	t1.getdata(6);
	displaydata(t1);
}
