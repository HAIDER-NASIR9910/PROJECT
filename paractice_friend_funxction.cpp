#include <iostream>
using namespace std;
class  test{
	private:
	int num1;
	int num2;
	public:
	friend void getdata(test &t1);
};
void getdata(test &t1)
{
	cout<<"ENTER THE NUM1"<<endl;
	cin>>t1.num1;
	cout<<"ENTER THE NUM2"<<endl;
	cin>>t1.num2;
}
int main()
{
 test t1;
 getdata(t1);
 return 0;
}

