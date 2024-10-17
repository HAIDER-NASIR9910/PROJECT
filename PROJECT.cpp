#include <iostream>
using namespace std;
class  Account{
	private:
	int account_number;
	string account_holder_name;
	float balance;
	float deposit;
	float withdrawn;
	public:
	void gettinginfo(int num,string name,float amount)
	{
		account_holder_name=num;
		account_holder_name=name;
	    balance=amount;
	}
	void displaydata()
	{
		cout<<"YOUR ACCOUNT NUMBER IS"<<" : "<<account_number<<endl;
		cout<<"ACCOUNT HOLDER NAME IS"<<" : "<<account_holder_name<<endl;
		cout<<"YOUR BALANCE IS"<<" : "<<balance<<endl;
	}
	void deposit_amount()
	{
		cout<<"YOUR BALANCE IS THIS"<<" : "<<balance<<endl;
		cout<<"ENTER THE AMOUNT YOU WANT TO DEPOSIT"<<endl;
		cin>>deposit;
		float sum=balance+deposit;
		cout<<"ADDING THE AMOUNT BECOMES"<<" : "<<sum<<endl;
	}
	void withdrawnamount()
	{
		cout<<"YOUR TOTAL AMOUNT IS THIS"<<" : "<<balance<<endl;
		cout<<"enter the amount you want to withdrawan"<<endl;
		cin>>withdrawn;
		float new1;
		new1=balance-withdrawn;
		cout<<"YOU WITH DRAWN AMOUNT IS THIS"<<" : "<<new1<<endl;
	}
	
};
int main()
{
     Account a1;
	 a1.gettinginfo(123,"HAIDER",12345.90);
	 a1.displaydata();
	 a1.deposit_amount();
	 a1.withdrawnamount();
	 a1.displaydata();
	 	
}
