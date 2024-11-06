#include <iostream>
using namespace std;
void func(int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
			cout<<n<<endl;
		return func(n-1);
	
	}
}
int main()
{
	int num;
	cout<<"ENTER THE NUMBER"<<endl;
	cin>>num;
	func(num);
	

    return 0;
}
