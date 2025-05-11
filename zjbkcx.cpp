#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int n)
	{
		data=n;
		next=NULL;
	}
};
class qeue{
	Node *front;
	public:
	qeue()
	{
		front=NULL;
	}
	void push(int n)
	{
	   Node *newnode=new Node(n);
	   if(front==NULL)
	   {
	      front=newnode;
	   }
	   newnode=front->next;
	   front=newnode;
	   
	}
	int peek()
	{
		if(front==NULL)
		{
			cout<<"QUEUE IS EMPATY"<<endl;
			return -1;
		}
		else
		{
			return front->data;
		}
	}
	

	 void pop() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == NULL) {
            front = NULL;
        }
        delete temp;
    

	}
	void print()
	{
	  Node *temp=front;
	  if(front==NULL)
	  {
	   cout<<"empaty"<<endl;
	  }
	  while(temp!=NULL)
	  {
	   cout<<temp->data<<endl;
	   temp=temp->next;
	  }
	}
};
int main()
{
    qeue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.print(); // Output: 1 2 3



   
}
