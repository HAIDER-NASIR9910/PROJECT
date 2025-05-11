#include <iostream>
using namespace std;
int queue[10], n = 10, x;
int rear = -1;
int front = -1;

void enqueue() {
    if (rear == n - 1) {
        cout << "QUEUE IS FULL" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        cout << "ENTER THE VALUE IN QUEUE" << endl;
        cin >> x;
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1) {
        cout << "QUEUE IS EMPTY" << endl;
    } else {
        cout << "REMOVED DATA MEMBER ID: " << queue[front] << endl;
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }
}
int main() {
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}



