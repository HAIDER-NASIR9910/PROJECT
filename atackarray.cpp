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

    return 0;
} #include <iostream>
using namespace std;
int qeue[10],n=10,x;
int rear=-1;
int front=-1;
void enque()
{
	if(rear==n-1)
	{
		cout<<"QEUE IS FULL"<<endl;
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
			cout<<"ENTER THE VALUE IN QUEUE"<<endl;
			cin>>x;
			rear++;
			qeue[rear]=x;	
	}
}
void deque()
{
	if(front==-1)
	{
		cout<<"QEUE IS EMPETY"<<endl;
	}
	else 
	{
		cout<<"REMOVER DATA MEMBER ID"<<" : "<<qeue[front]<<endl;
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}
	int peek(){
		if(front==-1)
		{
			return -1;
		}
		else
		{
			return qeue[front];
		}
	}
	void display()
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<qeue[i]<<endl;
		}
	}

int main()
{
	enque();
	enque();
	enque();
	enque();
	display();
	int y=peek();
	if(y==0)
	{
		cout<<"qeue is empty"<<endl;
	}
	else
	{
		cout<<"QUEUE FRONT VALUE IS"<<" : "<<y<<endl;
	}
	deque();
	deque();
	deque();
	deque();
	
    return 0;
}
