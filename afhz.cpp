#include <iostream>
using namespace std;
class student{
	private:
	static student st[5];
	string name;
	student(){
		cout<<"ENTER THE NAME"<<endl;
		getline(cin,name);
	}
	public:
	static student st1()
	{
		for(int i=0; i<=4;i++)
		{
			st[i]= student();
			if(i==5)
			{
				return st[i]; 
			}
		}
	}

		
	
};
int main()
{
	student st2=student :: st1();
	//student.st1();

    return 0;
}

