#include <iostream>
using namespace std;
struct student{
	string name;
	string rej;
	int age;
};
int main()
{
	student arr[3];
	for(int i=0;i<3;i++)
	{
	  cout<<"ENTER THE AGE OF THE STUDENT "<<endl;
	  cin>>arr[i].age;
	  cout<<"ENTER THE NAME OF THE STUDENT "<<endl;
	  cin>>arr[i].name;
	  cout<<"ENTER THE REJESTRATION NO OF STUDENT "<<endl;
	  cin>>arr[i].rej;
	}
	cout<<"DISPLAYING THE NAME OF THE STUDENT--------"<<endl;
		for(int i=0;i<3;i++)
	{

	  cout<<arr[i].age<<endl;
	 
	  cout<<arr[i].name<<endl;
	 
	  cout<<arr[i].rej<<endl;
	}
}
