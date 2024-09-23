#include <iostream>
using namespace std;
class A{
	private:
	int num1;
	int num2;
	int num3;
	public:
	//friend void input(A a);
	void input()
{
	cout<<"input the number 1"<<endl;
	cin>>num1;
	cout<<"input the number 2"<<endl;
	cin>>num2;
}
	int operator +(A a)
	{
		A a1;
	//	a1.num3=a.num1;
		
		return a.num1+a.num2;
	}
	void displaysum()
	{
		cout<<"SUM IS"<<endl;
		cout<<num3;
	}
};

int main()
{
	A a;
	a.input();
	a.displaysum();
}
