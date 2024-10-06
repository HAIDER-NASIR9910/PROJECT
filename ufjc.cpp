#include <iostream>
using namespace std;
void number(int n)
{
	if(n>=0)
	{
				cout<<n<<endl;
		return number(n-1);
	
	}
	else
	{
          	return;
	}
}
int main()
{
	number(7);
}
