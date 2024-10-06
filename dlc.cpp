#include <iostream>
using namespace std;
class take_num{
	public:
	int num;
};
class print : take_num{
	public:
	void display()
	{
		cout<<"your number is"<<" : "<<num<<endl;
	}
};

int main()
{

	print p;
	p.num=4;
	p.display();
}
