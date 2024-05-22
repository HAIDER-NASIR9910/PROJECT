#include <iostream>
using namespace std;
int main()
{
	int arr[3];

	int odd=1;
		for(int i=0;i<3;i++)
	{
		arr[i]=odd;
		odd+=2;
		cout<<odd<<endl;
	}
}
