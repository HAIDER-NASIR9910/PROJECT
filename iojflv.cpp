#include <iostream>
using namespace std;
void num(int n)
{
	cout<<n<<endl;
	if(n<=0)
	{
		return ;
	}
	else
	{
		return num(n-1);
	}
}
int main()
{
	num(5);
}
