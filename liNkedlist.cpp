#include <iostream>

// Creating a node
struct Node {
    int value;
    Node* next;
};

// print the linked list value
void printLinkedList(Node* p) {
    while (p != nullptr) {
        std::cout << p->value << " ";
        p = p->next;
    }
}

int main() {
    // Initialize nodes
    Node* head = nullptr;
    Node* one = nullptr;
    Node* two = nullptr;
    Node* three = nullptr;

    // Allocate memory
    one = new Node;
    two = new Node;
    three = new Node;

    // Assign value values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = nullptr;

    // printing node-value
    head = one;
    printLinkedList(head);

    // Clean up allocated memory
    delete one;
    delete two;
    delete three;

    return 0;
}
