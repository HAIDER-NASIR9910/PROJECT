#include <iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	
	node(int val)
	{
		data=val;
		next=NULL;
	}
};
class stack{
	node *top;
	public:
	stack()
	{
		top=NULL;
	}
	void push(int val)
	{
		node *newnode=new node(val);
		if(top==NULL)
		{
			top=newnode;
			newnode=top;
		}
		top->next=top;
		top=newnode;
	}
		void print()
	{
	  if(top==NULL)
	  {
	   cout<<"empaty"<<endl;
	  }
	  
	  node *temp=top;
	
	  while(temp!=NULL)
	  {
	   cout<<temp->data<<endl;
	   temp=temp->next;
	  }
	}
};
int main()
{
	stack s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.print();

    return 0;
}

