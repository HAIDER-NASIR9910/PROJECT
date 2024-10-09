#include <iostream>
using namespace std;
struct student{
	string name;
	int id;
	float cgpa;
};
void print(student arr[])
{
	for(int i=0; i<10; i++)
	{
	   cout<<"STUDENT DATA "<< i <<" : "<<endl;
	   cout<<arr[i].name<<endl;
	   cout<<arr[i].id<<endl;
	   cout<<arr[i].cgpa<<endl;
	   cout<<"---------------------------------------"<<endl;
	}
}
void heighest(student arr[10])
{
	int n=0;
	float max=0;
	for(int i=0; i<10; i++)
	{
		if(arr[i].cgpa>max)
		{
		    max=arr[i].cgpa;
		    n=i;
		}
	}
	cout<<"HEIGHEST CGPA IS"<<" : "<<max<<endl;
	cout<<"NAME IS"<<" : "<<arr[n].name<<endl;
	cout<<"ID IS"<<" : "<<arr[n].cgpa<<endl;
}
int main()
{
	student arr[10];
	for(int i=0; i<10; i++)
	{
		cout<<"ENTER THE FIRST DATA"<<" : "<< i <<endl;
		cout<<"ENTER YOUR NAME"<<endl;
		cin.ignore();
		getline(cin,arr[i].name);
		cout<<"ENTER THE CGPA"<<endl;
		cin>>arr[i].cgpa;
		cout<<"ENTER THE ID"<<endl;
		cin>>arr[i].id;
	}
	print(arr);
	heighest(arr);
	return 0;
}
