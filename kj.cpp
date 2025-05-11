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
class List{
	Node *head;
	Node *tail;
	public:
	List()
	{
		head=NULL;
		tail=NULL;
	}
	void insert(int val)
	{
		Node *newnode=new Node(val);
		if(head==NULL)
		{
			tail=head=newnode;
			return;;
		}
		else
		{
			
			newnode->next=head;
		}
	}
	void print()
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			cout<<"ELEMENTS ARE"<<" : "<<temp->data<<endl;
			temp=temp->next;
	}
	}
	
	void push_back(int val)
	{
		Node *newnode=new Node(val);
		if(head==NULL)
		{
			head=tail=newnode;
		}
		else
		{
			tail->next=newnode;
			tail=newnode;
		}
	}
	
	void pop_front()
	{
		if(head==0)
		{
			cout<<"THERE IS NO ELEMENTS TO POP_FRONT"<<endl;
			return;
		}
		Node *temp=head;
		head=temp->next;
		temp->next=NULL;
		delete temp;
	}
	
	void pop_back()
	{
		Node *temp=head;
		
		while(temp!=NULL)
		{
			temp=temp->next;
		}
		temp->next=NULL;
		delete tail;
		tail=temp;
	}
	
	void insert_at_middle(int pos,int val)
	{
		Node *temp=head;
		for(int i=0;i<pos-1 && temp!=NULL ;i++)
		{
		if(temp==NULL)
		{
			cout<<"INVAILD POSITION ENETER RETURN"<<endl;
			return;
		}
			temp=temp->next;
		}
		Node *newnode=new Node(val);
		newnode->next=temp->next;           //inserting the new node in the next of that we find in the loop
		temp->next=newnode;                 //creating a new node
	}
	
	void delete_at_middle(int pos)
	{
		Node *temp=head;
		for(int i=0;i<pos-1 && temp!=NULL ;i++)
		{
		if(temp==NULL)
		{
			cout<<"INVAILD POSITION ENETER RETURN"<<endl;
			return;
		}
			temp=temp->next;
		}	
			
	}
	
	void search(int key)
	{
		Node *temp=head;
		int pos=0;
		while(temp!=NULL)
		{
			if(temp->data==key)
			{
				cout<<"FOUND AT THIS POSITION"<<" : "<<pos<<endl;
			}
			else
			{
				pos++;
				temp=temp->next;
			}
		}
	}
};

int main()
{
	List ll;
	ll.insert(1);
	ll.insert(2);
	ll.insert(3);
	ll.insert(4);
	ll.pop_front();
	ll.pop_back();
	ll.print();
	ll.pop_back();
	ll.pop_front();
	ll.print();
	ll.insert_at_middle(2,3);
	ll.print();
	ll.delete_at_middle(2);
	ll.print();
	ll.search(3);
    return 0;
}

