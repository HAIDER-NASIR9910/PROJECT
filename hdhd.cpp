#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int salary;
	int service_year,jioned_year,y,total_year;
	double bonus;
	cout<<"please enter the salary\n";
	cin>>salary;
	cout<<"enter the year you joined\n";
	cin>>jioned_year;
	
	total_year=2024-jioned_year;
	if (total_year>=5)
	{
		bonus=(salary*5)/100;
		y=bonus+ salary;
		cout<<"your total salary with bonous is this\n"<<endl;
		cout<<y<<endl;
		
	}
	else
	{
		cout<<"youre service is not more than 5 year so youre not applicable\n"<<endl;
	}
	return 0;
	
}
