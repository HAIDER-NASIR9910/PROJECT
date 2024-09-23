#include <iostream>
using namespace std;
class A{
	private:
	int num1;
	int num2;
	public:
	friend void input(A a);
void get()    ;
};
void input(A a)
{
	cout<<"input the number 1"<<endl;
	cin>>a.num1;
	cout<<"input the number 2"<<endl;
	cin>>a.num2;
}

void A ::  get(){
		cout<<"VALUE IS"<<endl;
		cout<<num1;
		cout<<"value is"<<endl;
		cout<<num2;
}

int main()
{
	A a;
	input(a);
	a.get();
	
}
