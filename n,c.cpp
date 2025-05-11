#include <iostream>
using namespace std;
class character{
	private:
	char *ptr[];
	public:
	character(char arr[])
	{
		for(int i=0;i<='\0';i++)
		{
			ptr=new char[arr];
		}		
    }
	
	~character()
	{
		delete[] ptr;
	}
	
	bool operator !=(character ch2)
	{


		

	}
	
};
int main()
{
	character ch1("HAIDER");
	
	

    return 0;
}
