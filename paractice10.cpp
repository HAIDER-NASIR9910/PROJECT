#include <iostream>
using namespace std;
class name{
	private:
	string name;
	int rollno;
	public:
	void getdata()
	{
		cout<<"ENTER THE NAME"<<endl;
		cin>>name;
		cout<<"ENTER THE ROLLNO"<<endl;
		cin>>rollno;
	}
	friend void setdata(name &n1);
};
void setdata( name &n1)
	{
		cout<<"ENTER THE NAME"<<endl;
		cin>>n1.name;
		cout<<"ENTERT THE ROLLNO"<<endl;
		cin>>n1.rollno;
	}
int main()
{
	name n1;
}
