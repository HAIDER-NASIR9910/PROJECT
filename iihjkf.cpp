#include <iostream>
using namespace std;
struct student{
	string name;
	string rej;
	int rollno;
};
void func1(student arr[3]);
int main()
{
	student arr[3];
	for(int i=0; i<3; i++)
	{
		cin>>arr[i].name;
		cin>>arr[i].rej; 
		cin>>arr[i].rollno;
	}
	func1(arr);
}


void func1(student arr[3])
{
	for(int i=0; i<3; i++)
	{
	   	cout<<arr[i].name<<endl;
		cout<<arr[i].rej<<endl;
		cout<<arr[i].rollno<<endl;
	}
}
