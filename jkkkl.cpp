#include <iostream>
using namespace std;
int main()
{
	int arr[5]={1,5,7,4,5};
	int *ptr=arr;
	cout<<*ptr<<endl;
	cout<<*++ptr;
}
