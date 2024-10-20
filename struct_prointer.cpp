#include <iostream>
using namespace std;
struct rectangle{
	int length;
	int width;
	void getarea()
	{
		cout<<"THE AREA OF THE RECTANGLE IS"<<" : "<<length*width<<endl; 
   }
};
int main()
{
    rectangle r1;
    rectangle *ptr= &r1;
    cout<<"ENTER THE LENGTH"<<endl;
    cin>>ptr->length;
    cout<<"ENTER THE WIDTH"<<endl;
    cin>>ptr->width;
    ptr->getarea();
    return 0;
}

