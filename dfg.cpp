#include <iostream>
using namespace std;
class test{
	private:
	int marks;
	int marks2;
	public:
	void getdata();
	void display();
	test operator + (test t2){
		test t3;
		t3.marks=marks+t2.marks;
		t3.marks2-marks2+t2.marks2;
		
	}
	void display2()
	{
		cout<<"number of one is"<<marks<<endl;
		cout<<"numbers of two is"<<marks2<<endl;
	}
};
void test :: getdata()
{
	cout<<"ENTER THE MARK"<<" : "<< endl;
	cin>>marks;
	cout<<"ENTER THE MARKS2"<<" : "<<endl;
	cin>>marks2;
}
void test :: display()
{
	cout<<"YOUE ENTERD NUMBER IS"<<" : "<<marks<<endl;
	cout<<"YOUE ENTERD NUMBER IS"<<" : "<<marks2<<endl;
}


int main()
{
	test t1,t2;
	t1.getdata();
	t1.display();
	t2.getdata();
	t2.display();
	test  sum; 
	sum=t1+t2;
	sum.display2();
	
	
}
