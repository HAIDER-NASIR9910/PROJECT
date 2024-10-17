#include <iostream>
using namespace std;
int number(int num)
{
	 if(num==1)
	{
		return 1;
	}
	else
	{
		return num*num + number(num-1);
	}
}
int main()
{
 int n;
 cout<<"ENTER THE NUMBER"<<endl;
 cin>>n;
 int result=number(n);
 cout<<"-------------------------------------"<<endl;
 cout<<result<<endl;
 return 0;
}

