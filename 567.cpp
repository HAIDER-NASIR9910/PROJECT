#include <iostream>
using namespace std;
struct student{
	string name;
	int rollnumber;
	float gpa;
};

void func1(student arr[3]);
void func2(student arr[3]);


int main()
{
	student arr[3];
     func1(arr);
	func2(arr);
	  
}
void func1(student arr[3])
{
  
  		for(int i=0; i<3; i++)
	{
	
		
			cin>>arr[i].name;
			cin>>arr[i].rollnumber;
			cin>>arr[i].gpa;
		
	}
  	
}





void func2(student arr[3])
{
	
		for(int i=0; i<3; i++)
	{
			cout<<arr[i].name<<"   ";
			cout<<arr[i].rollnumber<<"   ";
			cout<<arr[i].gpa<<"   ";
	}
}
