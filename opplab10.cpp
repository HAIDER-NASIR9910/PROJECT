#include <iostream>
using namespace std;
class Employee{
	protected:
	string name;
	int employee_id;
	int base_salary;
	public:
	Employee(string n,int id,int salary)
	{
		name=n;
		employee_id=id;
		base_salary=salary;
	}
	void print_employee()
	{
		cout<<"NAME OFTHE EMPLOYEE IS"<<" : "<<name<<endl;
		cout<<"ID OF THE EMPLOYEE IS"<<" : "<<employee_id<<endl; 
	}
};
class Manager:public Employee{
	protected:
	int team_size;
	int bonus;
	public:
	Manager(int team,int b,string n,int id,int salary):Employee(n,id,salary)
	{
		team_size=team;
		bonus=b;
	}
	void print_Manager()
	{
		cout<<"SIZE OF THE TEAM IS"<<" : "<<team_size<<endl;
		cout<<"BONUS OF THE TEAM IS"<<" : "<<bonus<<endl;
		cout<<"ID OF THE EMPLOYEE IS"<<" : "<<employee_id<<endl;
		cout<<"SALARY OF THE MANGER WITH/without BONOUS IS"<<base_salary+bonus<<endl;
	}
	
};
class Engineer:public Manager{
	protected:
	string specialization;
	int over_time_pay;
	public:
	Engineer(string s,int o,int team,int b,string n,int id,int salary):Manager(team, b, n, id, salary)
	{
		specialization=s;
		over_time_pay=o;
	}
	void print_engineer()
	{
		cout<<"THIS PERSON HAVING SPECIALIZATION IN"<<" : "<<specialization<<endl;
		cout<<"THE SALARAY OF THIS ENGINEER WITH/WITHOUT OVER_TIME_PAY,BONUS,AND OVER_TIME_PAY IS"<<" : "<<base_salary+bonus+over_time_pay<<endl;
	}
	
};
class intern:public Engineer{
	protected:
	string uni_name;
	int stipend;
	public:
	intern(string u,int st,string s,int o,int team,int b,string n,int id,int salary):Engineer(s,o,team,b,n,id,salary)
	{
		uni_name=u;
		stipend=st;
	}
	void print_intern()
	{
		cout<<"NAME OF THE UNI IS"<<" : "<<uni_name<<endl;
		cout<<"STIPEND OF THIS STUDENT IS"<<" : "<<stipend<<endl;
	}
	
		
	
};
class HR: public intern{
	protected:
	int no_of_recruitments;
	int recruitment_base_bonus;
	public:
	HR(int n,int r,string u,int st,string s,int o,int team,int b,string na,int id,int salary):intern(u,st,s,o,team,b,na,id,salary)
	{
		no_of_recruitments=n;
		recruitment_base_bonus=r;
	}
	void print_HR()
	{
		cout<<"NO OF RECTURIMENTS HIRE BY THE HR ARE"<<" : "<<no_of_recruitments<<endl;
		cout<<"SALARY OF THE RECUITEMENTS BASE SALARY WITH/WITHOUT recruitment_base_bonus,BONOUS,BASE SALARY AND over_time_pay"<<" : "<<base_salary+bonus+over_time_pay+recruitment_base_bonus;
	}
	
};
int main()
{
	Manager M1(10,2000,"HAIDER",1,50000);
	M1.print_employee();
	M1.print_Manager();
	Engineer E1("MECHTRONICA",1000,10,2000,"ATTA",2,50000);
	E1.print_employee();
	E1.print_engineer();
	intern i1("PAK AUSTRIA",10000,"AI",0,0,0,"UMER",3,0);
	i1.print_employee();
	i1.print_intern();
	HR H1(100,1000,"PAK AUSTRIA",10000,"MECHTRONICA",1000,10,2000,"HIDAYAT",4,50000);
	H1.print_employee();
	H1.print_HR();
	

    return 0;
}

