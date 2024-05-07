#include <iostream>

using namespace std;

#define SIZE 5

class Queue {
    int items[SIZE];
    int front, rear;

  public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    void enQueue(int element) {
        if (isFull()) {
            cout << "Queue is full\n";
        } else {
            if (front == -1)
                front = 0;
            rear++;
            items[rear] = element;
        }
    }

    int deQueue() {
        int element;
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return (-1);
        } else {
            element = items[front];
            if (front >= rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
            return (element);
        }
    }

    void display() {
        int i;
        if (isEmpty()) {
            cout << "Empty Queue" << endl;
        } else {
            cout << "Front index-> " << front << endl;
            cout << "Items -> ";
            for (i = front; i <= rear; i++)
                cout << items[i] << "  ";
            cout << endl;
            cout << "Rear index-> " << rear << endl;
        }
    }
};

int main() {
    Queue q;

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    q.enQueue(6);

    q.display();

    q.deQueue();
    q.deQueue();

    q.deQueue();

    q.display();

    q.enQueue(6);
    q.enQueue(7);

    q.display();

    return 0;
}
