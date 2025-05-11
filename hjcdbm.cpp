#include <iostream>
using namespace std;
class Bank{
	protected:
	int balance;
	public:
	Bank(int b):balance(b){}
	virtual int getwithdrwal(int amount)
	{
		return balance-=amount;
	}
	virtual int getdeposit(int amount)
	{
		return balance+=amount;
	}
	virtual void display()
	{
		cout<<"BALNACE IS"<<" : "<<balance<<endl;
	}
};
class regular: public Bank {
	protected:
	string type_of_bank;
	static int min_amount;
	public:
	regular(string nam, int b):Bank(b),type_of_bank(nam){}
	virtual int getwithdrwal(int amount)
	{
		if(amount<min_amount)
		{
			return balance-=amount;
		}
		else
		{
			cout<<"NOT POSSIBLE"<<endl;
		}
	}
	virtual int getdeposit(int amount)
	{
		if(amount<min_amount)
		{
			return balance+=amount;
		}
		else
		{
			cout<<"NOT POSSIBLE"<<endl;
		}
	}
	virtual void display()
	{
		Bank::display();
		cout<<"NAME OF THE ACCOUNT IS"<<" : "<<type_of_bank<<endl;
	}		
};
int regular::min_amount=1000;

class child:public regular {
	protected:
	string name_type;
	static int min_amount;
	public:
	child(string nam, int b,string na):regular(nam,b),name_type(na){}
	virtual int getwithdrwal(int amount)
	{
		if(amount<min_amount)
		{
			return balance-=amount;
		}
		else
		{
			cout<<"NOT POSSIBLE"<<endl;
		}
	}
	virtual int getdeposit(int amount)
	{
		if(amount<min_amount)
		{
			return balance+=amount;
		}
		else
		{
			cout<<"NOT POSSIBLE"<<endl;
		}
	}		
	virtual void display()
	{
		regular::display();
		cout<<"CURRENT NAME OF THE BANK IS"<<" : "<<name_type<<endl;
	}
};
int child::min_amount=10000;
int main()
{
	child c1("REGULAR",100000,"CHILD");
	c1.display();
	c1.getdeposit(500);
	c1.display();
	c1.getdeposit(500);
	c1.display();
	

    return 0;
}

