#include <iostream>
using namespace std;
int main()
{
	int i=1;
	while (i<=10)
	{
		int j=10-i;
		while (j>0)
		{
			cout<<" ";
			j--;
		}
		int k=1;
		while (k<=i)
		{
			cout<<" *";
			k++;
		}
		cout<<endl;
		i++;
	}
}
