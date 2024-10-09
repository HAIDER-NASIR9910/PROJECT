#include <iostream>
using namespace std;
class car{
	private:
	string name;
	string modle;
	int number_plate;
	float price;
	public:	
	void getdata()
	{
		cout<<"ENTER THE NAME OF CAR";
		cout<<endl;
		cin.ignore();
		getline(cin,name);
		cout<<"ENTER THE MODLE"<<" : "<<endl;
		getline(cin,modle);
		cout<<"ENTER THE NUMBER PLATE NO"<<endl;
		cin>>number_plate;
		cout<<"ENTER THE PRICE"<<endl;
		cin>>price;
	}
	void PURCHAZED()
	{
		cout<<"YOUR CAR NAME IS"<<" : "<<name<<endl;
		cout<<"YOUR CAR MODLE IS"<<" : "<<modle<<endl;
		cout<<"YOUR NUMBER PLATE IS"<<" : "<<number_plate<<endl;
		cout<<"YOUR CAR PRICE IS"<<" : "<<price<<endl;
	}

	
};
int main()
{
  car c1;
  c1.getdata();
  cout<<"----------------------------------------------"<<endl;
  c1.PURCHAZED();	
}
