#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
}*top = NULL;

void push(int);
void pop();
void display();

int main() {
    int choice, value;
    cout << "\n:: Stack using Linked List ::\n";
    while (true) {
        cout << "\n***** MENU ******\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the value to be insert: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout << "\nWrong selection!!! Please try again!!!\n";
        }
    }
    return 0;
}

void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    if (top == NULL)
        newNode->next = NULL;
    else
        newNode->next = top;
    top = newNode;
    cout << "\nInsertion is Success!!!\n";
}

void pop() {
    if (top == NULL)
        cout << "\nStack is Empty!!!\n";
    else {
        Node* temp = top;
        cout << "\nDeleted element: " << temp->data;
        top = temp->next;
        delete temp;
    }
}

void display() {
    if (top == NULL)
        cout << "\nStack is Empty!!!\n";
    else {
        Node* temp = top;
        while (temp->next != NULL) {
            cout << temp->data << "--->";
            temp = temp->next;
        }
        cout << temp->data << "--->NULL";
    }
}
