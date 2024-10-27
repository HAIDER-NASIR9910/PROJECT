#include <iostream>
using namespace std;
class rectangle{
	private:
	int length;
	int width;
	public:
	void get()
	{
		cout<<"enter the length of the rectangle"<<endl;
		cin>>length;
		cout<<"enter the width of the rectangle"<<endl;
		cin>>width;
	}
};
int main()
{
	rectangle rect;
	rectangle *ptr= new rectangle(rect);
	ptr->get();

    return 0;
}

