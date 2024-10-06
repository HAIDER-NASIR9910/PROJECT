#include <iostream>
using namespace std;
void number(int n)
{
	if(n<=0)
	{
		return ;
	}
	else
	{
		cout<<n<<endl;
		return number(n-1);
	}
}
int main()
{
	number(7);
}
