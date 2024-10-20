#include <iostream>
using namespace std;
class A{
	int num1;
	int num2;
	public:
	void getdata(){
		cout<<"ENTER THE NUM1"<<endl;
		cin>>num1;
		cout<<"ENTER THE NUM2"<<endl;
		cin>>num2;
	}
	int set1(int n1)
	{
		num1=n1;
		return num1;
	}
	int set2(int n2)
	{
		num2=n2;
		return num2;
	}
};
int main()
{
	A a;
	a.getdata();
	cout<<a.set1(12)<<endl;
	cout<<a.set2(13)<<endl;
	A *ptr= new A;
	ptr->getdata();
	cout<<ptr->set1(23);
	cout<<endl;
	cout<<ptr->set2(24);
    delete ptr;
    return 0;
}

