#include <iostream>
using namespace std;
struct node{
	int data;
	node *prev;
	node *next;
};
node *head=NULL;
void insert(int n)
{
	node *newnode=new node;
	newnode->data=n;
	newnode->next=head;
	newnode->prev=NULL;
	if(head!=NULL)
	{
		head->prev=newnode;
	}
	head=newnode;
}

void print()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" "<<endl;
		temp=temp->next;
	}
}

void insertatend(int n)
{
	node *newnode=new node;
	newnode->data=n;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		node *temp=head;
		while(temp!=NULL)
		{
			temp=temp->next;
		}
		temp->next=head;
		newnode->prev=temp;
	}
}
void display()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<"ELEMENTS ARE"<<" : "<<temp->data<<endl;
		temp=temp->next;
	}
}

int main()
{
	insert(1);
	insert(2);
	insertatend(3);
	display();


    return 0;
}

