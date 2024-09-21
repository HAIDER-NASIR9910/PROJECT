#include <iostream>
using namespace std;
class counter{
	private:
	static int count;
	public:
	counter()
	{
		count++;
	}
	void countdata1()
	{
		cout<<"THE NUMBER OF THE OBJECTS ARE CALLED ARE"<<" : "<<count<<endl;
	}
};
int counter::count = 0;
int main()
{
	counter c1,c2,c3;
	c1.countdata1();
}
