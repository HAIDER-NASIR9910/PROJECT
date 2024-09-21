#include <iostream>
using namespace std;
int main()
{
	int *ptr= new int[3];
	*ptr[0]=3;
	*ptr[1]=2;
	*ptr[2]=1;
	cout<<*ptr[0]<<endl;
	cout<<*ptr[1]<<endl;
	cout<<*ptr[3]<<endl;
	
}
