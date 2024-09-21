#include  <iostream>
using namespace std;
int main()
{
	int size ;
	cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
	cin>>size;
	string *name = new string[size];
	for(int i=0; i<size; i++ )
	{
		cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
		cin>> name[i];
	}
		for(int i=0; i<size; i++ )
	{
		cout<<"NAME OF THE STUDENT "<<endl;
		cout<< name[i]<<endl;
	}
	delete[] name;
}
