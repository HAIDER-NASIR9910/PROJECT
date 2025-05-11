#include <iostream>
using namespace std;
class student{
	private:
	string name;
	int id;
	public:
	student(string nam=" ",int i=0):name(nam),id(i){}
	
	
};
int main()

{
	student *st;
	for(int i=0;i<3;i++)
	{
		st[i]=new st("HAIDER",1);
		
	}
	

    return 0;
}

