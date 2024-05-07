#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
};


Node* newNode(int item) {
    Node* temp = new Node();
    temp->key = item;
    temp->left = temp->right = nullptr;
    return temp;
}


void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}


Node* insert(Node* node, int key) {

    if (node == nullptr)
        return newNode(key);


    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);


    return node;
}


int main() {
    /* Let us create following BST
                50
            /       \
           30        70
          /  \      /  \
        20   40   60   80 */
    Node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Print inorder traversal of the BST
    inorder(root);

    return 0;
}
