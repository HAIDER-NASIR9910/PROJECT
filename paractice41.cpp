#include <iostream>
using namespace std;
void num_reverse(int n)
{
	if(n<=0)
	{
		return;
	}
	else
	{
		
		num_reverse(n-1);
		cout<<n<<endl;
	}
}
int main()
{
	    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    num_reverse(num);
    return 0;

    return 0;
}

