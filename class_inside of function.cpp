#include <iostream>
using namespace std;
void func1()
{
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
	
	test t1;
	t1.setdata(2,6);
}
int main()
{
    func1();
 return 0;
}

