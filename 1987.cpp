#include <iostream>
using namespace std;
struct Date{
      int day;
	  int Ndate;
	  int year;	
};
struct person{
	string name;
	Date date;
	void data()
	{
	
	cout<<"ENTER THE DAY "<<endl;
	cin>>date.day;
	cout<<"ENTER THE NDATE "<<endl;
	cin>>date.Ndate;
	cout<<"ENTER THE YEAR "<<endl;
	cin>>date.year;
	cout<<"NAME OF THE PERSON "<<name<<endl;
	cout<<" DATE OF BIRTH "<<date.day<<date.Ndate<<","<<date.year;
	
}

};
int main()
{
	person p1;
	cout<<"ENTER THE NAME"<<endl;
	cin>>p1.name;
	p1.data();
}
