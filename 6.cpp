#include <iostream>
using namespace std;
struct HA{
	int day;
	int date;
	int year;
};
struct person{
	string name;
	HA a;
	void func1()
	{
		cout<<"ENTERED THE NAME OF THE STUDENT "<<endl;
		cin>>name;
		cout<<"ENTER YOU DATE OF BIRTH "<<endl;
		cout<<"ENTER YOUR DATE "<<endl;
		cin>>a.date;
		cout<<"ENTER THE DAY "<<endl;
		cin>>a.day;
		cout<<"ENTER THE YEAR OF THE DOB"<<endl;
		cin>>a.year;
		cout<<"DOB OF THE PERSON IS "<<a.date<<" "<<a.day<<","<<a.year<<endl;
	}
};
int main()
{
	person p1;
	p1.func1();
	
}
