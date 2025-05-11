#include <iostream>
using namespace std;
class test{
	private:
		protected:
	int num1;
};
class r: public test{
	public:
	void set()
	{
		cout<<"num1"<<":"<<num1<<endl;
	}
};
int main()
{

    return 0;
}

