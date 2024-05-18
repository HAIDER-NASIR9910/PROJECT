#include <iostream>
using namespace std;
int main()
{
	int i=10;
	while ( i>=1)
	{
		int j=i;
		while (j>0)
		{
			cout<<"*";
			j--;
		}
		cout<<endl;
		i--;
	}
}
