#include <iostream>
using namespace std;

int main()
{
		struct {
		int length;
		int width;
		int height;
	}box1,box2,box3;

	box1.length=5;
	box1.width=8;
	box1.height=6;
	cout<<"THE VOLUME OF THE BOX 1 IS "<<" : "<<endl;
	cout<<box1.length*box1.width*box1.height<<endl;
	
	box2.length=5;
	box2.width=3;
	box2.height=6;
		cout<<"THE VOLUME OF THE BOX 2 IS "<<" : "<<endl;
		cout<<box2.length*box2.width*box2.height<<endl;
	
	box3.length=5;
	box3.width=2;
	box3.height=6;
		cout<<"THE VOLUME OF THE BOX 3 IS "<<" : "<<endl;
		cout<<box3.length*box3.width*box3.height<<endl;
}
