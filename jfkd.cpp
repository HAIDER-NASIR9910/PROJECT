#include <iostream>
using namespace std;
class Animal{
	protected:
	string name;
	string sound;
	public:
	virtual void sedata(string nam,string so)
	{
		name=nam;
		sound=so;
	}
	virtual void print()
	{
		cout<<"ANIMAL IS"<<" : "<<name<<endl;
		cout<<"SOUND OF THE ANIMAL IS"<<" : "<<sound<<endl;
	}

};
class cat : public Animal{
	public:
	void sedata(string nam,string so)override
	{
		name=nam;
		sound=so;
	}
	void print() override
	{
		cout<<"ANIMAL IS"<<" : "<<name<<endl;
		cout<<"SOUND OF THE ANIMAL IS"<<" : "<<sound<<endl;
	}
};
class dog : public cat{
	public:

	void sedata(string nam,string so) override
	{
		name=nam;
		sound=so;
	}
	void print()override
	{
		cout<<"ANIMAL IS"<<" : "<<" : "<<name<<endl;
		cout<<"SOUND OF THE ANIMAL IS"<<" : "<<sound<<endl;
	}
};
int main()
{
	cat c1;
	c1.sedata("cat","meow");
	c1.print();
	dog d1;
	d1.sedata("dog","Bark");
	d1.print();
    return 0;
}

