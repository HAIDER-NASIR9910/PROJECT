#include <iostream>
using namespace std;
class human{
	protected:
	string name;
	int foot;
	public:
	virtual void get(string n,int f)
	{
		name=n;
		foot=f;
	}
	virtual void display()
	{
		cout<<"name is"<<" : "<<name<<endl;
		cout<<"foots are"<<" : "<<foot<<endl;
		cout<<"HUMAN"<<endl;
	}
	
};
class cat : public human{
	public:
	void get(string n,int f) override{
		name=n;
		foot=f;
		cout<<"CAT"<<endl;
	}
	void display() override{
		cout<<"name is"<<" : "<<name<<endl;
		cout<<"foots are"<<" : "<<foot<<endl;
	}
};
int main()
{
	cat c1;
	c1.get("persian",4);
	c1.display();

    return 0;
}

