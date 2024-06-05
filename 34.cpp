#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"ENTER THE NUMBER A"<<endl;
	cin>>a;
	cout<<"ENTER THE NUMBER B"<<endl;
	cin>>b;
	do{
		char ch;
		cout<<"ENTER THE CHARACTER "<<endl;
		cin>>ch;
		if(ch=='+'||ch=='*'|| ch=='/'||ch=='-')
		{
	switch(ch)
	{
	
		{
		case '+':
		cout<<"ADDTION OF THE NUMBER IS "<<a+b<<endl;
		break;
	}
		{
		
		case '-':
		cout<<"SUBTARCTION OF THE NUMBER IS"<<a-b<<endl;
		break;}
		
		case '*':
		{
		cout<<"MULTIPLICATION OF THE NUMBER IS "<<a*b<<endl;
		break;
	}
		
		case '/':
		{
		
		cout<<"DIVISION OF THE NUMBER IS"<<a/b<<endl;
		break;
	}
		default:
		{
			cout<<"ENTER THE CORRECT KEY"<<endl;
		}
	
			
	}
	break;
		}
	
	else if(ch!='+'||ch!='*'|| ch!='/'||ch!='-') 
		{
			cout<<"ENTER THE CORRECT KEY "<<endl;
		}
		
	}while(true);
	
}
