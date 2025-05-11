#include <iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	
	node(int val)
	{
		data=val;
		next=NULL;
	}
};
class stack{
	node *top;
	public:
	stack()
	{
		top=NULL;
	}
	

	void push(int val)
	{
		node *newnode=new node(val);
		if(top==NULL)
		{
			top=newnode;

		}
		else{
		
		newnode->next=top;
		top=newnode;
	}
	}
	
	int peek()
	{
		if(top==NULL)
		{
			cout<<"EMPATY TOP"<<endl;
			return -1;
		}
		else
		{
			return top->data;
		}
	}
	
	

    void print() {
        if (top == NULL) {
            cout << "empty" << endl;
        }
        node* temp = top;
        while (temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
	
	void pop()
	{
		        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

		node *temp=top;
		top=temp->next;
		temp->next=NULL;
		delete temp;
	}
};
int main()
{
	stack s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.print();
	cout<<s1.peek();
	s1.pop();
	cout<<"------------------------"<<endl;
	s1.print();
	

    return 0;
}
