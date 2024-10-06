#include <iostream>
using namespace std;
void print_number(int num)
{
	if(num<=0)
	{
		return;
	}
	else
	{
		
	
		cout<<num<<endl;
		return print_number(num-1);
}
	
}
int main()
{
	int number;
	cout<<"ENTER THE NUMBER"<<endl;
	cin>>number;
	print_number(number);
}
