#include <iostream>
using namespace std;
struct rectangle{
	int length;
	int width;
};
int main()
{
	rectangle r1;
	rectangle *ptr=new rectangle(r1);
	cin>>ptr->length;
	cin>>ptr->width;

    return 0;
}

