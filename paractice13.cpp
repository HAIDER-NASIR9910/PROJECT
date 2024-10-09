#include <iostream>
using namespace std;
class test{
	private:
	int num;
	int num1;
	private:
	test(){
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	~test(){
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	void setdat(int n,int n1)
	{
		num=n;
		num1=n1;
	}
	
};
int man()
{
	
}
