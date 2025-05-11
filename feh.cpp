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

class linkeslist
{
	Node *head;
	Node *tail;
	public:
	linkedlist()
	{
		head=tail=NULL;
	}
	void push(int val)
	{
			Node *newnode=new Node(val);
		if(head==NULL)
		{
			head=tail=newnode;
		}
		else{
		
	
		newnode->next=head;
		head=newnode;
	}
	}
	
	void delet()
	{
		if(head==NULL)
		{
			cout<<"LIST IS EMPATY"<<endl;
		}
		
		Node *temp=head;
		
		if(head==tail)
		{
			head=tail=NULL;
			delete temp;
		}
		
		else
		{
			head=head->next;
			temp=NULL;
			delete temp;
		}
	}
	
	void insert_at_pos(int pos,int val)
	{
		Node *newnode=new Node(val);
		Node *temp=head;
		for(int i=0;i<pos-1 && temp!=NULL;i++)
		{
			if(temp==NULL)
			{
				cout<<"ENTER THE CORRECT POSITION"<<endl;
				return;
			}
			temp=temp->next;
		}
		temp->next=newnode->next;
		temp->next=newnode;
	}	
	
	void insert_back(int val)
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			temp=temp->next;
		}
		Node *newnode= new Node(val);
		tail->next=newnode->next;
		newnode=tail;
	}
	
	
	
	void delete_last() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

	
	void display()
	{
		if(head==NULL)
		{
			cout<<"LIST IS EMPATY"<<endl;
		}		
		Node *temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
		
	}
	
};
int main()
{
	linkeslist ll;
	ll.push(2);
	ll.push(3);
	ll.push(4);
	ll.display();
	cout<<"--------------------"<<endl;
	ll.delet();
	ll.display();
	cout<<"--------------------"<<endl;
	ll.insert_at_pos(2,45);
	ll.display();
	cout<<"--------------------------"<<endl;
	ll.insert_back(21);
	ll.display();
	cout<<"--------------------"<<endl;
	ll.delete_last();
	ll.display();

    return 0;
}

