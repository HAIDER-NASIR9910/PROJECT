#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head=NULL;
void input()
{
	node *newnode=new node;
	newnode->data=1;
	newnode->next=head;
	head=newnode;
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
	input();
	input();
	cout<<"DISLAY"<<endl;
	display();

    return 0;
}

