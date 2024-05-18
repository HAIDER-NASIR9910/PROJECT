#include <iostream>
using namespace std;
int main()
{
	int i=10;
	do{
		int j=10-i;
		do{
			cout<<" ";
			j--;
		}while(j>0);
		int k=i;
		do{
			cout<<" *";
			k--;
		}while(k>0);
		cout<<endl;
		i--;
	} while (i>=1);
}
