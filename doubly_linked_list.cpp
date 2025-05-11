#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node *pre;
	Node(int val)
	{
		data=val;
		next=NULL;
		pre=NULL;
	}
};

class list{
	Node *head;
	Node *tail;
	public:
	list()
	{
		head=NULL;
		tail=NULL;
	}
	
	void insert(int val)
	{
		Node *newnode=new Node(val);
		if(head==NULL)
		{
			head=tail=newnode;
		}
		else
		{
			newnode->next=head;
			head->pre=newnode;
			head=newnode;
		}
	}
	
	void pushback(int val)
	{
		Node *newnode=new Node(val);
		if(head==NULL)
		{
			head=tail=newnode;
		}
		else
		{
			newnode->pre=tail;
			tail->next=newnode;
			tail=newnode;
			
		}
	}
	
	void print()
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
	
	void delete_front()
	{
		if(head==NULL)
		{
			cout<<"HEAD IS EMPATY"<<endl;
			return;
		}
		Node *temp=head;
		head=head->next;              //to makke it to address to next node and make it head
		head->pre=NULL;
		if(head!=NULL)
		{
			head->pre=NULL;
		
		}
			temp->next=NULL;
			delete temp;
	}
	
	void pop_back()
	{
		Node *temp=tail;
		tail=tail->pre;
		if(tail!=NULL)
		{
			tail->next=NULL;
		}
		temp->pre=NULL;
		delete temp;
	}

};
int main()
{
	list dl;
	dl.insert(2);
	dl.insert(3);
	dl.insert(1);
	dl.print();
	cout<<"----------------------------"<<endl;
	dl.pushback(4);
	dl.print();
	cout<<"-----------------------------"<<endl;
	dl.delete_front();
	dl.print();
	cout<<"------------------------------"<<endl;
	dl.pop_back();
	dl.print();
    return 0;
    
}
