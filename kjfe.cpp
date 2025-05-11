#include <iostream>
using namespace std;
int stack[10], n=10, top=-1;
void push(int x)
{
	if(top>=n-1)
	{
		cout<<"STACK IS FULL"<<endl;
	}
	else
	{
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"STACK IS EMPATY"<<endl;
	}
	else
	{
		cout<<"THE STACK POPED ELEMENT IS"<<" : "<<stack[top]<<endl;
		top--;
	}
}
int peek()
{
	return stack[top];
}
void display()
{
	if(top>=0)
	{
	for(int i=top;i>=0;i--)
	{
		cout<<stack[i]<<"  "<<endl;
	}
	}
	else
	{
		cout<<"STACK IS EMPATY"<<endl;
	}

}
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	int y=peek();
	cout<<"TOP MOST OF DATA ELEMENT OF THE STACK IS"<<" : "<<y<<endl;
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();


    return 0;
}

