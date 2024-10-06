#include <iostream>
using namespace std;
void print_number(int num)
{
	if(num>=0)
	{
			return print_number(num-1);
				

	}
			cout<<num<<endl;
	 if(num<=0)
	{
		return;
	}
}
int main()
{
	int number;
	cout<<"ENTER THE NUMBER"<<endl;
	cin>>number;
	print_number(number);
}
