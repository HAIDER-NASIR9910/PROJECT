#include <iostream>
using namespace std;
int sum(int n)
{
	if(n<=0)
	{
		return 0;
	}
	else
	{
		cout<<n<<endl;
		return sum(n-1)+n;
	}
}
using namespace std;
int main()
{
	int result;
	result=sum(5);
	cout<<result<<endl;
}
