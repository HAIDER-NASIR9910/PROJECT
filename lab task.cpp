#include <iostream>
using namespace std;
class book{
	private:
	string *name;
	string *title;
	string *writer;
	int *pages;
	public:

	book (string n, string t, string w, int p)
	{
		name= new string(n);
		title= new string(t);
		writer= new string(w);
		pages= new int(p);
	}
	void display()
	{
		cout<<"THE NAME OF THE YOUR IS"<<" : "<<*name<<endl;
		cout<<"TITLE OF THE BOOK IS"<<" : "<<*title<<endl;
		cout<<"THE NAME OF THE BOOK WRITER IS"<<" : "<<*writer<<endl;
		cout<<"THE PAGE OF THE BOOK IS"<<" : "<<*pages<<endl;
	}
};
int main()
{
	book b1("HAIDER","HARRY POTTER","RICK RODRAN",200);
	b1.display();
    return 0;
}

