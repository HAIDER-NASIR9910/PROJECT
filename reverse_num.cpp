#include <iostream>
using namespace std;
void reverse_num(int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
				cout<<n<<endl;
		reverse_num(n-1);

	}
}
int main()
{
	int num;
	cout<<"ENTER THE NUMBER"<<endl;
	cin>>num;
	reverse_num(num);

    return 0;
}

