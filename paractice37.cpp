#include <iostream>
using namespace std;

int main()
{
  int *ptr=new int[3];
  cout<<"-------enter the elements of array-----------"<<endl;
  for(int i=0; i<3; i++)
{
	cin>>ptr[i];
}
cout<<"----------ouput/print------------------"<<endl;
  for(int i=0; i<3; i++)
{
	cout<<ptr[i]<<endl;
}
 return 0;
}

