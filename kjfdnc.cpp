#include <iostream>
using namespace std;
class test{
    public:
    int num1;
    int num2;
    public:
    test(){}
    test(int n1,int n2)
    {
        num1=n1;
        num2=n2;
    }
    void print()
    {
        cout<<"num1 is"<<" : "<<num1<<endl;
        cout<<"num2 is"<<" : "<<num2<<endl;
    }
};
class employee{
    public:
    int salary;
    public:
    employee(){}
    employee(int s)
    {
        salary=s;
    }
    void print()
    {
        cout<<"Salary is"<<" : "<<endl;
    }
};
test operator +(employee e1,test t1)
{
    test t3;
    t3.num1=e1.salary+t1.num1;
    t3.num2=e1.salary+t1.num2;
    return t3;
}

int main()
{
	test t1(2,3);
	employee e1(2000);
	test t4=e1+t1;
	t4.print();
	return 0;

}

