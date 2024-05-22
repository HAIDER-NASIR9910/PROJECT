#include <iostream>
using namespace std;
int main()
{
   int arr[3][3];
   int odd=1;
   for(int i=0;i<3; i++)
   {
   	
   	for(int j=0;j<3;j++)
   	{
   		arr[i][j]=odd;
   		odd+=2;
   		cout<<odd<<endl;
	   }
	  }   

}
