#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int val)
	{
		data=val;
		next=NULL;
	}
};

class Circular{
	Node *head;
	Node *tail;
	public:
	Circular()
	{
		head=tail=NULL;
	}
	
	void insert(int val)
	{
		Node *newnode= new Node(val);
		if(head==NULL)
		{
			head=tail=newnode;
			tail->next=head;
		}
		else
		{
			newnode->next=head;
			head=newnode;
			tail->next=newnode;
		}
	}
	
	void insertatend(int val)
	{
		Node *newnode=new Node(val);
		if(head==NULL)
		{
			head=tail=newnode;
			tail->next=head;
		}
		else
		{
			newnode->next=head;
			tail->next=newnode;
			tail=newnode;
		}
	}
	
	void delete_at_head()
	{
		if(head==NULL)
		{
			cout<<"LIST IS EMPTY"<<endl;
			return;
		}
		if(head==tail)
		{
			delete head;
			head=tail=NULL;
		}
		Node *temp=head;
		head=head->next;
		tail->next=head;
		temp->next=NULL;
		delete temp;
		
	}
	
	void delete_at_tail()
	{
		if(head==NULL)
		{
			cout<<"LIST IS EMPTY"<<endl;
			return;
		}
		if(head==tail)
		{
			delete head;
			head=tail=NULL;
		}
		Node *temp=tail;
		Node *prev=head;
		while(prev->next!=tail)
		{
			prev=prev->next;
		}
		tail=prev;
		tail->next=head;
		temp->next=NULL;
		delete temp;
		
		
	}
	
	void display()
	{
		if(head==NULL)
		{
			cout<<"LIST IS EMPTY"<<endl;
			return;
		}
		Node *temp=head->next;
		while(temp!=head)
		{
			cout<<temp->data;
			temp=temp->next;
		}
	}
};
int main()
{
	Circular c;
	c.insert(1);
	c.insert(2);
	c.insert(3);
	c.insert(4);
	c.display();
	cout<<"\n-------------------------"<<endl;
	c.insertatend(23);
	c.display();
	cout<<"\n----------DELTE AT head---------"<<endl;
	c.delete_at_head();
	c.display();
	cout<<"\n---------------------------------"<<endl;
	c.delete_at_tail();
	c.display();
    return 0;
}

