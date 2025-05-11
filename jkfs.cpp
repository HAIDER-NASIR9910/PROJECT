#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev;
};
node *head=NULL;
void insert(int n)
{
	node *newnode=new node;
	newnode->data=n;
	newnode->next=head;
	if(head!=NULL)
	{
		head->prev=newnode;
		
	}
	head=newnode;
}


void print() {
    node* temp = head;
    while (temp != NULL) {
        cout << "ELEMENTS ARE" << " : " << temp->data << endl;
        temp = temp->next;
    }
}


int search(int key)
{
	node *temp=head;
	int pos;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			cout<<"THE IS FOUND"<<endl;
			return pos;
		}
		else
		{
			pos++;
			temp=temp->next;
		}
	}
		cout<<"NOT THERE"<<endl;
		return -1;
}

void insertatfirst(int n)
{
	insert(n);
}


void insertatlast(int n) {
    node* newnode = new node;
    newnode->next=head;
    newnode->prev=NULL;
    newnode->data = n;
    if (head == NULL) {
        head = newnode;
    } else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}



void display()
{
	node *temp=NULL;
	while(temp!=NULL)
	{
		cout<<"ELMENTS ARE"<<" : " <<temp->data<<endl;
		temp=temp->next;
	}
	
}
int main()
{
	insert(4);
	insert(5);
	insert(8);
	print();
	//insertatlast(23);
	print();

    return 0;
}

