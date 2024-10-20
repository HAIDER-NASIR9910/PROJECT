#include <iostream>
using namespace std;
class agecalculator
{
	private:
	int age;
	int current_year;
	public:
	agecalculator()
	{
		age=0;
		current_year=2024;
	}
	void setdata(int a)
	{
		age=a;
	}
	int getdata()
	{
		cout<<"YOUR AGE IS"<<" : "<<endl;
		return current_year-age;
	}
	
};
int main()
{
	agecalculator a1;
	a1.setdata(2006);
	cout<<a1.getdata();
    return 0;
}

