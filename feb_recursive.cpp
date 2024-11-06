#include <iostream>
using namespace std;
int feb(int num)
{
	if(num==1 || num==0)
	{
		return 1;
	}
	else
	{
		
		return feb(num-1) + feb(num-2);
	}
}
int main()
{
	int number=9;
	feb(4);

    return 0;
}

