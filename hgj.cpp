#include <iostream>
using namespace std;
struct boxvolume{
	float height;
	float length;
	float width;
	void func1()
	{
		cout<<"THE VALUE OF HEIGHT IS " << ":" <<height<<endl;
		cout<<"THE VALUE OF LENGTH IS " << " : "<<length<<endl;
		cout<<"THE VALUE OF WIDTH IS "  << " : "<<width<<endl;
	};
	void func2()
	{
		cout<<"THE VOLUME OF THE BOX IS "<<" : "<<endl;
		cout<<height*length*width<<endl;
	};
};
int main()
{
	boxvolume A1;
	A1.height=2.5;
	A1.length=2.8;
	A1.width=2.9;
	A1.func1();
	A1.func2();
	
}
