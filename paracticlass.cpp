#include <iostream>
using namespace std;
class test {
	private:
	const int num1;
	const int num2;
	const int num3;
	string name;
	static int total_marks;
	public:
	test(int n1,int n2,int n3,string nam):num1(n1),num2(n2),num3(n3){
		name=nam;
	}	
	void print()
	{
		cout<<"NAME IS"<<" : "<<name<<endl;
		cout<<"NUM1 IS"<<" : "<<num1<<endl;
		cout<<"NUM2 IS"<<" : "<<num2<<endl;
		cout<<"NUM3 IS"<<" : "<<num3<<endl;
	}
	int getaverage()
	{
		int  average;
		average=(num1+num2+num3)/total_marks;
		return average;
	}
};
int test :: total_marks=300;
int main()
{
	test t1(80,90,93,"HAIDER");
	cout<<"YOUR AVERAGE IS"<<" : "<<endl;
	cout<<t1.getaverage()<<endl;
	t1.print();

    return 0;
}

