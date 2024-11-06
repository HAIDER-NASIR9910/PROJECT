#include <iostream>
using namespace std;

int main()
{
	char arr[20]="HAIDER NASIR";
	cout<<arr<<endl;
	cout<<*arr<<endl;
	char *ptr= new char[20];
		for(int i=0;i<20;i++)
	{
		ptr[i]=arr[i];
	}
	for(int i=0;i<20;i++)
	{
		cout<<ptr[i]<<endl;
	}
	delete[] arr;

    return 0;
}

