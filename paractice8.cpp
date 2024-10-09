#include <iostream>
using namespace std;
class A{
	private:
	int num;
	public:
	void get()
	{
		cout<<"ENTER THE NUMBER"<<endl;
		cin>>num;
	}
	void set(int n)
	{
		num=n;
		cout<<"YOUR NUM IS AND NUM"<<endl;
		cout<<num;
	}
};

int main()
{
	A a;
	a.get();
	a.set(3);
}
