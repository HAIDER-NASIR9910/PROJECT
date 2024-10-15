#include <iostream>
using namespace std;
class test{
	private:
	int num;
	protected:
	void get_data()
	{
		cout<<"ENTER THE NUMBER"<<endl;
		cin>>num;
	}
};
class test2 : test{
	private:
	int num1;
	protected:
	void getdata()
	{
		cout<<"ENTER THE NUMBER"<<endl;
		cin>>num1;		
	}
};
int main()
{
	test2 t2;
	t2.get_data();
	t2.getdata();
}
