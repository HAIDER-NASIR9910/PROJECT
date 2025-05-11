#include <iostream>
using namespace std;
struct node{
	int data;
	node *node;
};
node *head=NULL;

void insert(int n)
{
	node *newnode=new node;
	newnode->data=n;
	newnode->node=head;
	head=newnode;
}

void display()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<"ELEMENTS ARE"<<" : "<<temp->data<<endl;
		temp=temp->node;
	}
}

void insert_at_start(int n,int pos)
{
	node *newnode=new node;

	if(pos==1)
	{
	newnode->data=n;		
	newnode->node;
	}
	node *temp=head;
	for(int i=0;i<pos-1 && temp!=NULL;i++)
	{
	 temp=temp->node;
	}
	newnode->node=temp->node;
	temp->node=newnode;
	
}
int main()
{
	insert(2);
	insert(3);
	display();

    return 0;
}

