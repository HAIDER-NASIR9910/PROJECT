#include <iostream>
using namespace std;
class person
{
	private:
	string name;
	string rejno;
	public:
	void getdata(string n, string r)
	{
		name=n;
		rejno=r;
	}
	friend void display(person);
};
	void display(person p1)
	{
		cout<<"YOUR NAME IS"<<" : "<<p1.name<<endl;
		cout<<"YOUR REJ# IS"<<" : "<<p1.rejno<<endl;
	}
int main()
{
	person p1;
	p1.getdata("haider","b24s0308ai088");
	display(p1);
}
