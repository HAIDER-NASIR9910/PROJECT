#include <iostream>
using namespace std;
class A{
	public:
	string name;
	int age;
	string rgno;
	private:
	void getdata()
	{
		cout<<"enter the namer of the sudent"<<endl;
		cin>>name;
		cout<<"enter the age of the student"<<endl;
		cin>>age;
		cout<<"enter the reg no"<<endl;
		cin>>rgno;
	}
};
int main()
{
	A a;
	a.getdata();
}
