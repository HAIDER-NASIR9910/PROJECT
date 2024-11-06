#include <iostream>
using namespace std;
class test{
	private:
	int *num1;
	int *num2;
	string *name;
	public:
	test(int n1,int n2,string nam)
	{
		num1=new int(n1);
		num2=new int(n2);
		name=new string(nam);
	}
	
	~test()
	{
		delete num1;
		num1=NULL;
		delete num2;
		num2=NULL;
		delete[] name;
		name=NULL;
	}
	void display();
};
void test::display(){
	cout<<"NUM1 IS"<<" : "<<*num1<<endl;
	cout<<"NUM2 IS"<<" : "<<*num2<<endl;
	cout<<"NAME IS"<<" : "<<*name<<endl;
}

int main()
{
	test t1(1,2,"HAIDER");
	t1.display();
	

    return 0;
}

