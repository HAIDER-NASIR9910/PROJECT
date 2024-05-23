#include <iostream>
using namespace std;
struct student{
	string name[10];
	int rej[10];
	string depart[10];
	void func1()
	{
		cout<<"ENTER THE NAME"<<endl;
		for(int i=0; i<10; i++)
		{
				
				cin>>name[i];
			
		}
			for(int i=0; i<10; i++)
		{
				cout<<"ENTER THE REJESTRATION NO"<<endl;
				cin>>rej[i];
		}
				for(int i=0; i<10; i++)
		{
			
				cout<<"ENTER THE DARPARTMENT"<<endl;
				cin>>depart[i];
			
		}
		
			for(int i=0; i<10; i++)
		{
				cout<<name[i]<<" : "<<rej[i] <<" : "<< depart[i]<<endl;
		}
		

}
};

int main()
{
	student a;
	a.func1();

}

