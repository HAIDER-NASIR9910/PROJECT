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
		func(n-1);
		cout<<n<<endl;
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

