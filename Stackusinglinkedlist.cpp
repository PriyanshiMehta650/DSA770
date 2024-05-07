#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = nullptr;

void push(int);
void pop();
void display();

int main() {
    int choice, value;
    cout << "\n @@@Stack using Linked List@@@ \n";
    while (true) {
        cout<<"\n operations which you like to perform \n";
        cout<<endl;
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice from the above : ";
        cin >> choice;
        switch (choice) {
            case 1:
                int a;
                cout << "\nEnter the value to be insert: \n ";
                cin >> value;
                push(value);
                cout<<"do you want to see your stack ? 1 yes ,2 No ";
                cin>>a;
                if (a == 1){
                    display();
                }


                break;
            case 2:
                cout<<"\n last element of the stack would be deleted";
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout << "\n Wrong selection!!! kindly  change your selection it should be within the range which are 1,2 ,3,4 \n";
        }
    }
    return 0;
}

void push(int value) {

    Node* newNode = new Node;
    newNode->data = value;
    if (top == nullptr)
        newNode->next = nullptr;
    else
        newNode->next = top;
    top = newNode;
    cout << "\nInsertion is Success !!!\n";
}

void pop() {
    if (top == nullptr)
        cout << "\nStack is underflow\n";
    else {
        Node* temp = top;
        cout << "\nDeleted element: " << temp->data;
        top = temp->next;
        delete temp;
    }
}

void display() {
    if (top == nullptr)
        cout << "\nStack is underflow no elements to show!!!\n";
    else {
        Node* temp = top;
        while (temp->next != nullptr) {
            cout <<"--"<< temp->data<<"--"<<endl;
            temp = temp->next;
        }
        cout<<"--"<<temp->data<<"--";
    }
}





























