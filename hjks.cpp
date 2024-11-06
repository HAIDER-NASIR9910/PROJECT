#include <iostream>
using namespace std;
class student{
	private:
	static student st[5];
	static int count;
//	static int count;
	student(){
		cout << "Constructor called for "  << endl;
	}
	public:
	static student st1()
	{
		for(int i=0; i<=4;i++)
		{
			st[i] = student();
			return st[i];
			if(i>4)
			{
				 return st[5];
			}
		}
	}	
};
int main()
{
    student st2=student :: st1();
    student st3=student :: st1();
    student st4=student :: st1();
    student st5=student :: st1();
    student st6=student :: st1();
//    student st6=student :: st1();



    return 0;
}

