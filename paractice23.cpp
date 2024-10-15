#include <iostream>
using namespace std;
class test{
	private:
	int kms;
	int meters;
	public:
	void get_data()
	{
		cout<<"enter the kilometers you travelled"<<endl;
		cin>>kms;
		cout<<"enter the meters you travelled"<<endl;
		cin>>meters; 
	}
	test()
	{
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
    ~test()
	{
		cout<<"deconstructor is called"<<endl;
	}
	test operator +(test t2)
	{
		test t3;
		t3.kms=kms+t2.kms;
		t3.meters=meters+t2.meters;
		return t3;
	}
	void sum_of_private()
	{
		cout<<"YOUR SUM OF KMS ARE"<<" : "<<kms;
		cout<<endl;
		cout<<"YOUR SUM OF METER ARE"<<" : "<<meters;
	}
};
int main()
{
	test t1,t2;
	t1.get_data();
	t2.get_data();
	test sum=t1+t2;
	sum.sum_of_private();
	return 0;
}
