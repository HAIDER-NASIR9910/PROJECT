#include <iostream>
using nameapace std;
void func1(char arr[12],int index=0)
{
   if(arr='\0')
   {
   	return 0;
	}
	else
	{
		cout<<arr[index]<<endl;
	}	return func1(arr,index+1);
}
int main()
{
	
}
