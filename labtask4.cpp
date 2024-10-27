#include <iostream>
using namespace std;
class book{
	private:
	string *title;
	string *author;
	int *page;
	public:
    book()
    {
 	   	title= new string(nullptr);

	   	author=new string(nullptr);

	   	page=new int(0);   
	}
	book(string t, string a,int p)
	{
	   	title= new string(t);

	   	author=new string(a);

	   	page=new int(p);

	}
	~book()
	{
		cout<<"DESTRUCTOR IS CALLED"<<endl;
		cout<<"------------------OBJECT DESTROYED------------------"<<endl;
		delete[]  title;
		delete[]  author;
		delete[]  page;
		 
	}
	void display()
	{
	  cout<<"THE TITLE OF THE BOOK IS"<<" : "<<*title<<endl;
	  cout<<"THE author OF THE BOOK IS"<<" :  "<<*author<<endl;	
	  cout<<"THE PAGES OF THE BOOK IS"<<" : "<<*page<<endl;
	}

};
int main()
{
	book b1("HARRY POTTER","RICK RODRAN ",120);
	b1.display();
	

    
    return 0;
}

