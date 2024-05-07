#include<iostream>
using namespace std;

class Stack {
    int top;
    int* arr;
    int n;

public:
    Stack(int size) {
        n = size;
        top = -1;
        arr = new int[n];
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == n - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Overflow. Cannot push element." << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Underflow. Cannot pop element." << endl;
            return;
        }
        int value = arr[top--];
        cout << value << " popped from stack." << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;
    Stack s(size);

    int choice, num;
    cout << "Enter from the following numbers:\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the number to push: ";
                cin >> num;
                s.push(num);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Exiting...";
                return 0;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    }

    return 0;
}
