#include <iostream>
using namespace std;
class singleton{
	private:
	int data;
	singleton* ptr;
	singleton(){}
	singelton(int d)
	{
		data=d;
	}
	public:
	static singleton* createinstance()
	{
		if(ptr!=0)
		{
			return instance;
		}
		else
		{
			new singleton();
		}
	} 
	void getdata(int d)
	{
		d=data;
	}
	int getdata()
	{
		return data;
	}
};
int main()
{
	singleton *ptr2=singleton::createinstance();
	

    return 0;
}

