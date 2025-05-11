#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head=NULL;
void insert(int n)
{
	node *newnode=new node;
	newnode->data=n;
	newnode->next=head;
	head=newnode;
}
void insert_at_position(int pos,int n)
{
	node *newnode=new node;
	newnode->data=n;
	node *temp=head;
	for(int i=0;i<pos-2 && temp!=NULL;i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void delete_at_end()
{
	node *temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	delete temp->next;
	temp=NULL;
	
}
void display()
{
	if(head==NULL)
	{
		cout<<"NODE IS EMPATY"<<endl;
		return;
	}
	if(head!=NULL)
	{
		node *temp=head;
		while(temp!=NULL)
		{
			cout<<"NODE ELEMENT ID"<<" : "<<temp->data<<endl;
			temp=temp->next;
		}
	}
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	display();
	cout<<"-----------------------"<<endl;
	insert_at_position(1,6);
	display();
	cout<<"-----------------------"<<endl;
	delete_at_end();
	display();

    return 0;
}

