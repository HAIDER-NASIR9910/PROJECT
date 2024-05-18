//HAIDER NASIR 
//B24S0308AI088 
#include <iostream>
using namespace std;
int main()
{
	int Password=1234;
	int i;
	do{
		cout<<" ente the password"<<endl;
		cin>>Password;
		if (Password==1234)
		{
			cout<<" youre entered in the id"<<endl;
			break;
		}
		else{
			cout<<" enter the password again"<<endl;
		}
		i++;
	}
	
	while (true);
}
