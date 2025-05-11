#include <iostream>
using namespace std;
class test{
	private:
	int num1;
	int num2;
	static string name;
	static int count;
	public:
	test(int n1,int n2)
	{
		num1=n1;
		num2=n2;
		count++;
	}
	~test(){count--;}
	void display()
	{
		cout<<"NUM1 IS"<<" : "<<num1<<endl;
		cout<<"NUM2 IS"<<" : "<<num2<<endl;
		cout<<"NO OF OBJECST CREATED"<<" : "<<count<<endl;
		cout<<"NAME IS"<<":"<<name<<endl;
	}
	
};
string test:: name="HAIDER";
int test :: count =0;
int main()
{
	test t1(3,9);
	t1.display();
	test t2(2,4);
	t2.display();
    return 0;
}

