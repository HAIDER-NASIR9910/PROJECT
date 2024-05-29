#include <iostream>
using namespace std;
int main()
{
	int start,last,next;
	cout<<"ENTER THE number of starting "<<endl;
	cin>>start;
	cout<<"ENTER THE number of last "<<endl;
	cin>>last;
	next=start;
	start+=last;
	next+=last;
	cout<<start+next<<endl;

}
