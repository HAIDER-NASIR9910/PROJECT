#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
	cin>>size;
	 int *ptr= new int[size];
	 for(int i=0; i<size; i++)
	 {
	 	cin>>ptr[i];
	 }
	 	 for(int i=0; i<size; i++)
	 {
	 	cout<<ptr[i]<<endl;
	 }
	 delete[] ptr;
}
