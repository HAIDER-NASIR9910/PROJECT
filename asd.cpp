//HAIDER NASIR
//B24S0308AI088
#include <iostream>
using namespace std;
void func1(int r,int c)
{
  int arr[r][c];
 for(int i=0; i<r; i++)
 {
 	for(int j=0;j<c;j++)
 	{
 		cout<<"ENTER THE ELEMENTS OF THE ARRAY "<<endl;
 		cin>>arr[i][j];
	 }
 }
    cout<<"PRINTING THE MATRIX --------------------"<<endl;
  for(int i=0; i<r; i++)
 {
 	for(int j=0;j<c;j++)
 	{
 		cout<<arr[i][j]<<"  ";
	 }
	 cout<<endl;
 }	
 int max=arr[0][0];
 	  for(int i=0; i<r; i++)
 {
 	for(int j=0;j<c;j++)
 	{
 		if(arr[i][j]>max)
 		{
 			max=arr[i][j];
		 }
	 }
 }	
 cout<<" THE MAXIMUM VALUE OF THE ARRAY IS "<<" : "<<max;
}
int main()
{
   int a=3;
   int b=3;
   	func1(a,b);
}
