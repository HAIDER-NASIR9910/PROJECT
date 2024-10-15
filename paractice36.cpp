#include <iostream>
using namespace std;
class A{
	private:
	int num;
	public:
  
	~A();
	void get();
	A();
};
   A::~A()
   {
   	cout<<"DECONSTRUCTOR IS CALLED"<<endl;
   }
	A::A(){
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
void A::get(){
	cout<<"ENTER THE NUM"<<endl;
	cin>>num;
}
int main()
{
 
 return 0;
}

