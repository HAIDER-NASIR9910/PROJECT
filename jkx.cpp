#include <iostream> 
using namespace std;
class test{
	private:
	int *ptr;
	public:
	test(int i)
	{
		ptr=new int(i);
	}
	test operator ++()
	{
		(*ptr)++; // Increment the value pointed to by ptr
        return *this; 
	}
};
int main()
{
	test a1(6);
	++a1;
	
}
