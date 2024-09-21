#include <iostream>
using namespace std;
int main()
{
	int x=3;
	int y=4;
	int *p=&x;
	int *p2=&y;
	p!=p2;
	if(p==p2)
	{
		cout<<"true";
	}
	else
	{
		cout<<"not true"<<endl;
	}
}
