#include <iostream>
using namespace std;
	class test{
		private:
		int num1;
		int num2;
		public:
		test()
		{
			cout<<"CONSTRUCTOR IS CALLED"<<endl;
		}
		~test()
		{
			cout<<"DECONSTRUCTOR IS  CALLED"<<endl;
		}
		void setdata(int n1,int n2)
		{
			num1=n1;
			num2=n2;
			cout<<"NUM 1 IS"<<"  :  "<<num1<<endl;
			cout<<"NUMI 2 IS"<<"  :  "<<num2<<endl;
		}	
				int getdata1(int n1)
		{
			num1=n1;
			return num1;
			
		}
		int getdata2(int n2)
		{
			num2=n2;
			return num2;
		}	
	};
int main()
{ 
    test t1;
    test *testptr=&t1;
    testptr->setdata(2,4);
    test *testptr1=new test;
    testptr1->getdata2(2);
    testptr1->setdata(8,9);
    delete testptr1;
    testptr1=0; 
    return 0;
}

