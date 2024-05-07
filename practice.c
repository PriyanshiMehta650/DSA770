#include <iostream>
using namespace std;
struct Node{

int key;
Node* left ;
Node*right;


};
Node* newnode(int item){
Node* temp = new Node();
temp-> key =item;
temp->left=temp->right=nullptr;
return temp;
}
void inorder(Node* root){
if(root!=nullptr){
inorder(root->left);
cout<<root->key;
inorder(root->right);

}
}
Node* insert(Node* node, int key){
if(node==nullptr)
   return newNode(key);

}
