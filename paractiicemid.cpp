#include <iostream>
using namespace std;

int main()
{
	int num=4;
	int *ptr=&num;
	int *ptr2;
	*ptr=5;
	cout<<num<<endl;
	*ptr=*ptr2;
	cout<<*ptr<<endl;
	cout<<*ptr2<<endl;

    return 0;
}

