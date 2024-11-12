#include <iostream>
using namespace std;
class student{
	private:
	string name;
	public:
	void setdata(string nam)
	{
		name=nam;
	}
	void print()
	{
		cout<<"NAME IS"<<" : "<<name<<endl; 
	}
	
	student operator+(student s2)
	{
		student s3;
		s3.name=name+s2.name;
		return s3;
	}
	
};
int main()
{
	student s1;
	s1.setdata("HAIDER ");
	student s2;
	s2.setdata("NASIR");
	student st4=s1+s2;
	st4.print();
    return 0;
}

