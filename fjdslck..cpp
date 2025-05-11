#include <iostream>
using namespace std;
class student{
	private:
	static string name;
	public:
	student(){}
	static string getname()
	{
		return name;
	}
};
string student::name="HAIDER";
int main()
{
	student st1;
	cout<<student::getname()<<endl;
	cout<<st1.getname();
	
	//cout<<student::name<<endl;    //this could occur if the member varible static is in the public

    return 0;
}

