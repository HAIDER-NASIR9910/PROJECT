#include <iostream>
using namespace std;
class rectangle{
	private:
	int width;
	int height;
	public:
	rectangle(int h,int w)
	{
		width=w;
		height=h;
	}
	int getarea()
	{

		return width*height;
	}
	
};
int main()
{
	rectangle rect(2,3);
	rectangle *ptr= new rectangle(rect);
	
	cout<<ptr->getarea();

    return 0;
}

