#include <iostream>
using namespace std;
class player{
	private:
	string playername;
	string playerteam;
	int age;
	public:
	player()
	{
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	~player()
	{
		cout<<"DESTRUCTOR IS CALLED"<<endl;
	}
	void inputdata(string a, string b, int c)
	{
		playername=a;
		playerteam=b;
		age=c;
	}
	void displaydata()
	{
		cout<<"NAME OF THE PLAYER IS"<<playername<<endl;
		cout<<"AGE OF THE PLAYER IS"<<age<<endl;
		cout<<"PLAYER TEAM IS"<<playerteam<<endl;
	}
	void changename(string n)
	{
		playername	=n;
	}
		void changeteam(string t)
	{
	       playerteam=t;
	
	}
		void changeage(int a)
	{
		age=a;
	}
	
};
void func1()
{
	player p;
	p.inputdata("haider","143",18);
	p.displaydata();
	int choice;
	do{
		cout<<"FOR CHANE OF THE NAME PRESS 1"<<endl;
		cout<<"FOR CHANE OF THE team PRESS 2"<<endl;
		cout<<"FOR CHANE OF THE age PRESS 3"<<endl;
		cout<<"FOR nothing chane PRESS 4"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
			{
				p.changename("fahad");
				p.displaydata();
				break;
			}
			
			case 2:
			{
				p.changeteam("132");
				p.displaydata();
				break;
			}
			
			case 3:
			{
				p.changeage(18);
				p.displaydata();
				
				break;
			}
			
			case 4:
			{	
				break;
			}
		}
	}while(true);
}

int main()
{
	func1();
	
}
