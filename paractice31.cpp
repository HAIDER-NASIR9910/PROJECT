#include <iostream>
using namespace std;
int main()
{
	int num=99;
    int num1;
	do
	{
			cout<<"ENTER THE NUMBER"<<endl;
	cin>>num1;
		if(num1==num)
		{
			cout<<"NUMBER is gotten"<<endl;
			break;
		}
		else if(num1<num)
		{
		
		cout<<"ADD more FIGURES"<<endl;
	}
	else if(num1>num)
	
	{
		cout<<"ADD LESS FIGURES"<<endl;
	}
	}while(true);
	cout<<"----------------------------------"<<endl;
	return 0;
}
