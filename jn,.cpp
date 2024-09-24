#include <iostream>
using namespace std;
void func1(int &n)
{
	cout<<n<<endl;
}
int main()
{
	int num;
	func1(num)
}
