#include <iostream>
using namespace std;
class  bank_account{
	protected:
	string name;
	float balance;
	public:
	bank_account(string nam,int b)
	{
		name=nam;
		balance=b;
	}
	float withdrawn(float amount)
	{
		if(amount<=balance)
		{
			return balance-amount;
		}
		else
		{
			cout<<"CONDITION NOT MET"<<endl;
		}
	}
	virtual float deposit(float amount)
	{
		return amount+=balance;
	}
	void display()
	{
		cout<<"NAME OF ACCOUNT HOLDER IS"<<" : "<<name<<endl;
		cout<<"BALANCE IS"<<" : "<<balance<<endl;
	}
};
class current_account:public bank_account{
	protected:
	float min_amount;
	public:
	current_account(float m,string nam,int b):bank_account(nam,b)
	{
		min_amount=m;
	}
	float withdrawn(float amount)
	{
		if(amount!=min_amount &&  amount<min_amount)
		{
			return balance+-amount;
		}
		else
		{
			cout<<"NOT APPLICABLE"<<endl;
		}
	}
	
};
int main()
{
	bank_account b1("HAIDER",200000);
	current_account c1(5000,"HAIDER",20000);
	c1.withdrawn(2000);
	c1.display();
	

    return 0;
}

