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
void insertatposition(int pos,int n)
{
	node *newnode=new node;
	newnode->data=n;
	if(pos==1)
	{
		newnode->next=head;
		head=newnode;
	}
	node *temp=head;
	for(int i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void delete_first_node()
{
	if(head==NULL)
	{
		cout<<"NODE IS EMPATY"<<endl;
		return;                                 //for no further executions
	}
	node *temp=head;
	head=head->next;
	delete temp;
}
void delete_at_last()
{
	if(head==NULL)
	{
		cout<<"NODE IS EMPTY"<<endl;
		return;
	}
	if(head->next=NULL)                   //check weather the first node is last node;
	{
		delete head;
		head=NULL;
		return;
	}
	node *temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	delete temp->next;
	temp=NULL;
}
void deleteatanyposition(int pos) {
    node *temp=head;
    if(pos==1) {
        head=head->next;
        delete temp;
    }
    if(temp==NULL || temp->next==NULL) {
        cout<<"THERE IS NOTHING TO DELETE"<<endl;
    }
    node *prev = NULL;
    for(int i=0;i<pos-1 && temp!=NULL;i++) {
        prev = temp;
        temp=temp->next;
    }
    if(temp == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }
    prev->next = temp->next;
    delete temp;
}

void display()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" "<<endl;
		temp=temp->next;
	}
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	display();
	insertatposition(3,34);
	display();
	delete_first_node();
	cout<<"AFTER DELETTION AT FIRST OF THE LINKED LISTS"<<endl;
	display();
	cout<<"DELETION AT DEFIIEND POSITION"<<" : "<<endl;
	deleteatanyposition(3);
	display();
	//delete_at_last();
	//cout<<"AFTER DELETING AT LAST"<<endl;
	//display();

    return 0;
}
