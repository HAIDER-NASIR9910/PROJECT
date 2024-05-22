#include <iostream>
using namespace std;
int main()
{
	int arr[3][3];
	int even=2;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			arr[i][j]=even;
			even+=2;
			cout<<even<<endl;
		}
	}
}
