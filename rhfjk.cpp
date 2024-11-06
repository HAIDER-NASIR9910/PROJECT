#include <iostream>
using namespace std;
class A{
	int num1;
	int num2;
	public:
	static string name;
	A(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	~A()
	{
		cout<<"DESTORYED THE OBJECT"<<endl;
	}
	static string getname(string n) {
		name=n;
		return name;
	}
	int getarea()const
	{
		return num1*num2;
	}
	
	
	
};
string A :: name="HAIDER";
int main()
{
	const A a(2,3);
	cout<<a.getarea();
	cout<<endl;
	cout<<A :: name;

    return 0;
}

