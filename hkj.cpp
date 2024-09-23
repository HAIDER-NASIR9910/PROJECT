#include <iostream>
using namespace std;
int main()
{
	int arr[3]={1,2,3};
	int *ptr= &arr[0];

		cout<<*ptr<<endl;
		cout<<++*ptr<<endl;
		cout<<++*ptr<<endl;
	
}
