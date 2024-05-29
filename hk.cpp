#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"ENTER THE NUMBER FOR THE FINDING THE NUMBER IS ARMSTRONG OR NOT "<<endl;
	cin>>num;
	int temp,r;
	temp=num;
	int sum=0;
	while(num>0)
	{
		r=num%10;//here modlous take the value on the reminder only so it take the last valu of the number

		sum=sum+ (r*r*r);
		num =num/10;	//take the first two value in the first loop 
		                //in the num variable and do again and in third it take only one value usiiing this similarly
	}
	if(sum==temp)
	{
		cout<<"this is an armstrong number "<<endl;
	}
	else
	
	{
		cout<<"THIS IS NOT AN ARMSTRONG NUMBER "<<endl;
	}	
}
