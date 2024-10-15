#include <iostream>
using namespace std;
class car{
	private:
	string brand;
	string modle;
	int year;
	public:
	car()
	{
		cout<<"constructor is called"<<endl;
		brand=" ";
		modle=" ";
		year=0;
	}
	car(string mod)
	{
		modle=mod;
		cout<<"constructor is called"<<endl;
		cout<<"MODLE OF THE CLASS IS"<<" : "<<modle<<endl;
	}
	void setter(string br,int ye)
	{
		brand=br;
		year=ye;
		cout<<"THE BRAND OF THE CAR IS"<<" : "<<brand<<endl;
		cout<<"THE YEAR OF THE CAR IS"<<" : "<<year<<endl;
	}
	void get()
	{
		cout<<"ENTER THE BRAND OF THE CAR"<<endl;
		getline(cin,brand);
		cout<<"ENTER THE MODLE OF THE CAR"<<endl;
		getline(cin,modle);
		cout<<"ENTER THE YEAR OF THE CAR"<<endl;
		cin>>year;
		cin.ignore();
	}
	~car()
	{
		cout<<"DECONSTRUCTOR IS CALLED"<<endl;
		cout<<"OBJECT IS DESTROYED"<<endl;
		cout<<"--------------------------------------"<<endl;
	}
	void display()
	{
		cout<<"THE BARND OF THE CAR IS"<<" : "<<brand<<endl;
		cout<<"THE YEAR OF THE CAR IS"<<" : "<<year<<endl; 
		cout<<"THE MODLE OF THE CAR IS"<<" : "<<modle<<endl;
	}
	int setyear(int ye)
	{
		year=ye;
		return year;
	}
	string setmodle(string  mod)
	{
		modle=mod;
		return modle;
	}
	string setbrand(string bran )
	{
		brand=bran;
		return brand;
	}
};
int main()
{
  car c1("supra");
  c1.setter("toyota",2000);
  cout<<"---------------------New Object-----------------"<<endl;
  car c2;
  c2.get();
  c2.display();
  cout<<"-------------Changing Through Setter------------"<<endl;
  c2.setbrand("honda");
  c2.setmodle("civic");
  c2.setyear(2020);
  c2.display();
  return 0;
}
