#include <iostream>
using namespace std;
class time{
	private:
	int hours;
	int minutes;
	int seconds;
	public:
		
	time()
	{
		hours=minutes=seconds=0;
		cout<<"CONSTRUCTOR IS CALLED"<<endl;
	}
	
	time(int h,int m, int s)
	{
    hours=(h>=0 && h<24) ? h : 0 ;
	minutes=(m>=0 && m<60) ? m : 0;
	seconds=(s<=0 && s<60) ? s : 0;		
	}
	
	void getdata(int h,int m, int s)
	{
    hours=(h>=0 && h<24) ? h : 0 ;
	minutes=(m>=0 && m<60) ? m : 0;
	seconds=(s<=0 && s<60) ? s : 0;
	}
	
	~time()
	{
		cout<<"DECONSTRUCTOR IS CALLED"<<endl;
	}
	
	void display()
	{
		cout<<"CURRENT TIME IS"<<endl;
		cout<<hours<< " : "<<minutes<<" : "<<seconds<<endl;
	}
	void militarytime(int h,int m, int s)
	{
		cout<<(h<10)? 0 : h<< h; 
	}
	
};
int main()
{
	time t1(23,26,56);
	t1.display();
	return 0;
}
