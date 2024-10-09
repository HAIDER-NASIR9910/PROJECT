#include <iostream>
using namespace std;
void number(int n)
{
	if(n<=0)
	{
		return;
	}
	else
	{
		cout<<"MY NAME IS HAIDER"<<endl;
		return number(n-1);
	}
}
int main()
{
  int n1=9;
  number(n1);
}
