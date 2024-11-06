#include <iostream>
using namespace std;
class test{
	private:
	const int num1;
	const int num2;
	const string name;
	 mutable int num3;
	static string section;
	public:
	test(int n1,int n2,int n3,string nam):num1(n1),num2(n2),name(nam){
		num3=n3;
	}
	void print()
	{
		cout<<"YOUR NUM1 IS"<<" : "<<num1<<endl;
		cout<<"YOUR NUM2 IS"<<" : "<<num2<<endl;
		cout<<"YOUR NUM3 IS"<<" : "<<num3<<endl;
		cout<<"YOUR NAME IS"<<" : "<<name<<endl;
		cout<<"YOUR SECTION IS"<<" : "<<section<<endl;
		
	}
	int getdata(int n3) const
	{
		num3=n3;
		return num3;
	}
	static string getsection(string sec) {
		section=sec;
		return section;
	}	
};
string test::section="AI-BLUE";
int main()
{
	

    return 0;
}

