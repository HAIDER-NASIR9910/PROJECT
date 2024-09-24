#include <iostream>
using namespace std;
string nam(char name[20])
{
	
	if (name == '\0')
	{
		return 0;
	}
	else 
	{
	  cout<<name;
	  return nam(name-1);
	}
}

int main()
{
	int size;
	cout<<"enter the size of the array"<<endl;
	cin>>size;
	char name[size];
	cout<<"ENTER THE NAME"<<endl;
	cin>>name;
	cout<<"size of the array is"<<" : "<<sizeof(name)<<endl;
	nam(name);
}
