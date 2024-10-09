#include <iostream>
using namespace std;
void num(int n)
{
	if(n<=0)
	{
		return;
	}
	else
	{
		cout<<n<<endl;
		return num(n-1);
	}
}

int main()
{
	int number=10;
	num(number);
}
