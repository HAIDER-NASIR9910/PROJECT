#include <iostream>
using namespace std;
class A{
	private:
	int num;
	public:
	A(int n1){
		cout<<"CONSTRUCTOR"<<endl;
		num=n1;
		cout<<"YOUR 2X NUM IS"<<" : "<< 2*num<<endl;
	}
	~A(){
		cout<<"DECONSTRUCTOR"<<endl;

	}
		
};
int main()
{
	A a(3);
	return 0;	
}
