#include <iostream>
using namespace std;
struct student{
	string name;
	string rej;
	int age;
};
void func1(student arr[3]);
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
    func1(arr);
}
void func1(student arr[3])
{
	cout<<"DISPLAYING THE NAME OF THE STUDENT--------"<<endl;
		for(int i=0;i<3;i++)
	{

	  cout<<arr[i].age<<endl;
	 
	  cout<<arr[i].name<<endl;
	 
	  cout<<arr[i].rej<<endl;
	}
}
