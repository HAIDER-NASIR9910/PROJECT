#include <iostream>
using namespace std;
class character{
	private:
	char *ptr;
	public:
	character(string name)
	{
		
		for(int i=0;i<name.length();i++)
		{
			ptr[i]=name[i]; 
		}

    }
	
	~character()
	{
		delete[] ptr;
	}
	
	bool operator !=(character ch2)
	{
		if(*ptr!= ch2->ptr)
		{
			return false;
		}
		else
		{
			return true;
		}

		

	}
	
};
int main()
{
	character ch1("HAIDER");
	
	

    return 0;
}

