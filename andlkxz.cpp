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
	Node *rear;
	public:
	qeue()
	{
		front=rear=NULL;
	}
	void push(int n)
	{
	   Node *newnode=new Node(n);
	   if(front==NULL)
	   {
	      front=rear=newnode;
	   }
	   rear->next=newnode;
	   rear=newnode;
	   
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
            rear = NULL;
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
    cout << "Front element: " << q.peek() << endl; // Output: Front element: 1
    q.pop();
    q.print(); // Output: 2 3
    return 0;


   
}
