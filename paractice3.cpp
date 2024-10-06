#include <iostream>
using namespace std;
class test{
	private:
	int num;
	public:
	void get()
	{
		cout<<"ENTER THE NUMBER "<<" : "<<endl;
		cin>>num;
	}
	void display()
	{
		cout<<"THE NUMBER IS "<<" : "<<num<<endl;
	}
	test ()
	{
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	~test ()
	{
		cout<<"DECONSTRUCTOR IS CALLED"<<endl;
	}
	void sum1()
	{
		cout<<"YOUR SUM IS"<<" : "<<num;
	}
    bool  operator ==(test t2)
	{
		bool  t3=1;
		if (num==t2.num)
		{
			cout<<"it is equal"<<endl;
			t3=0;
		}
	}
};
int main()
{
	test t1;
	t1.get();
	//t1.display();
	test t2;
	t2.get();
	//t2.display();
	  if (t1 == t2) {
        cout << "Numbers are equal." << endl;
    } else {
        cout << "Numbers are not equal." << endl;
    }

    
}
