#include <iostream>
using namespace std;
int main()
{
	int arr[3];
	int arr2[3];
	int *ptr=arr;
	int *ptr2=arr2;
	cout<<"ENTER THE NUMBERS IN THE ARRAY"<<endl;
	for(int i=0; i<3; i++){
		cin>>ptr[i];
		cout<<endl;
	}
	cout<<"PRINTING THE ARRAY 1"<<endl;
		for(int i=0; i<3; i++){
		cout<<ptr[i];
			cout<<endl;
	}
	cout<<"ENTER THE NUMBERS IN THE ARRAY 2"<<endl;
	for(int i=0; i<3; i++)
	{
		cin>>ptr2[i];
			cout<<endl;
	}
		cout<<"PRINTING THE ARRAY 1"<<endl;
		for(int i=0; i<3; i++){
		cout<<ptr[i];
			cout<<endl;
	}
	if(ptr<ptr2)
	{
		cout<<"print p1 is grater than p2"<<endl;
	}
	else{
		cout<<"p2 is grater than p1"<<endl;
	}
    
	
	
	
	
}
