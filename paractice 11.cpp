#include <iostream>
using namespace std;
struct student{
	string name;
	int id;
	float cgpa;
};
void print(student arr[10])
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
	float max=arr[0].cgpa;
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
	student arr[10]={{"HAIDER",1,3.91},{"ATTA",2,3.5},{"ABDULLAH",3,3.4},{"TARIQ",4,3.6},{"RUAF",5,3.2},{"SIBGHAT",6,3.8},{"SARFARAZ",7,3.3},{"ABDUL",8,3.2},{"TALHA",9,3.3},{"UMER",10,2.5}};
	print(arr);
	heighest(arr);
	return 0;
}
