#include <iostream>
using namespace std;
int main()
{
    int sum=0;
	for(int i=0;i<10;i++)
	{
			int a;
			cout<<"ENTER THE VOTING PRESS ONE"<<endl;
			cin>>a;
	int *ptr = &a;
	cout<<*ptr<<endl;
	sum+=*ptr;
	}
	cout<<sum<<endl;
	
}
