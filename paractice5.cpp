#include <iostream>
using namespace std;

int main()
{
	char arr[20]="HAIDER NASIR";
	char *ptr=new char[20];
	cout<<arr<<"---------------------"<<endl;
	cout<<*arr<<"--------------------------------"<<endl;
	for(int i=0;i<20;i++)
	{
		ptr[i]=arr[i];
	}
	for(int i=0;i<20;i++)
	{
		cout<<ptr[i]<<endl;
	}
	cout<<ptr++<<endl;
	cout<<ptr++<<endl;
	cout<<ptr++<<endl;
	cout<<ptr++<<endl;

    return 0;
}

