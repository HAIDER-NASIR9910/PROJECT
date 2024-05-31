#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number to check wheather its is armstrong or not "<<endl;
	cin>>num;
	int temp,r;
	temp=num;
	int sum=0;
	for(int i=0; i<3 ; i++)
	{
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}
	if(temp==sum)
	{
		cout<<"its an armstrong number "<<endl;
	}
	else 
	{
		cout<<"its not an armstrong number"<<endl;
	}
	return 0;
}
