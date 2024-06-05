#include <iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int position;
	cin>>position;
	int number;
	cin>>number;
	for(int i=0; i<=position; i++)
	{
		a[i+1]=a[i];
		a[position]=number;
	}
	for(int i=0; i<9; i++)
	{
		cout<<a[i]<<endl;
	}
	
}
