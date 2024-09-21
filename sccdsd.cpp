#include <iostream>
using namespace std;
class test{
	private:
	int rollno;
	float marks;
	string name;
	public:
	void inputdata()
	{
		cout<<"ENTER YOUR ROLLNO "<<" : "<<endl;
		cin>>rollno;
		cout<<"ENTER YOUR MRAKS "<<" : "<<endl;
		cin>>marks;
		cout<<"ENTER YOUR NAME "<<" : "<<endl;
		cin>>name;
	}
	void outputdata()
	{
		cout<<"your rollno"<<":"<<rollno<<endl;
		cout<<"your marks are"<<" : "<<marks<<endl;
		cout<<"your name is "<<" : "<<name<<endl;
	}
	test()
	{ 
	
	cout<<"THE COUNSTRUCTOR IS CALLED"<<endl;     
			cout<<"your rollno"<<":"<<rollno<<endl;
		cout<<"your marks are"<<" : "<<marks<<endl;
		cout<<"your name is "<<" : "<<name<<endl;
    }	
};
int main()
{
	test t;
	t.inputdata();
	t.outputdata();
	//t::inputdata();
	
}
