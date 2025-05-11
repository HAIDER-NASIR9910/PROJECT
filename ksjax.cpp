#include <iostream>
using namespace std;

struct node {
    int data;
    node* next; // Changed to node*
};

node* head = NULL; // Changed to node*

void input() {
    node* newnode = new node;
    newnode->data = 1;
    newnode->next = head;
    head = newnode;
}

int main() {
    input(); // Call the input function
    return 0;
}


