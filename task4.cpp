#include <iostream>
#include <cstring>
using namespace std;
class book{
	private:
	char *title;
	char *author;
	int *page;
	public:
    book()
    {	
	}
	book(const char *t, const char *a, int p) {
        title = new char;
        author = new char;
        page = new int;
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
	  cout<<"THE TITLE OF THE BOOK IS"<<" : "<<title<<endl;
	  cout<<"THE author OF THE BOOK IS"<<" :  "<<author<<endl;	
	  cout<<"THE PAGES OF THE BOOK IS"<<" : "<<*page<<endl;
	}

};
int main()
{
    book b1("HARRY POTTER","RICK ",12);
    b1.display();
    
    return 0;
}


