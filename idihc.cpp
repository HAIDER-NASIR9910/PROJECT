#include <iostream>
using namespace std;\
struct person{
	string name;
	float height;
	int age;
	int weight;
	void func1()
	{
		cout<<"NAME OF THE PERSON IS "<< " : " <<name<<endl;
		cout<<"THE WEIGHT OF THE PERSON IS "<<" : " <<weight<<endl;
		cout<<"AGE OF THE PERSON IS "<<" : "<<age<<endl;
		cout<<"HEIGHT OF THE PERSON IS "<<" : "<<height<<endl;
	}
};
int main()
{
	person a1;
	a1.name="ATTA-UR-REHMAN";
	a1.height=5.7;
	a1.age=21;
	a1.weight=55;
	a1.func1();
	
}
