#include <iostream>
using namespace std;
class A{
	private:
	string name;
	string voice;
	int feet;
	public:
	void set(string n, string v, int f)
	{
		name=n;
		voice=v;
		feet=f;
	}
	void print()
	{
		cout<<"NAME OF THIS SPECIE IS"<<" : "<<name<<endl;
		cout<<"VOICE OF THIS IS"<<" : "<<voice<<endl;
		cout<<"NO OF FEETS ARE "<<" : "<<feet<<endl;
	}
};
class Human : public A{
	
	
};
class Animal: public Human{
	
};
int main()
{
    Human h1;
    h1.set("haider","normal",2);
    h1.print();
    Animal a1;
    a1.set("loin","own voice",4);
    a1.print();
    return 0;
}

