#include <iostream>
using namespace std;
void num()
{
	static int n=9;
	cout<<n<<endl;
	n++;
}
int main()
{

	num();
	num();
	num();	

    return 0;
}

