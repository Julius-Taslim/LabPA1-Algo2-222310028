#include <iostream>
using namespace std;

struct Node {
  //Properties Nodes
  int data;
  struct Node *left, *right;

  //Constructor
  Node (int data){
    this->data = data;
    left = right = NULL;
  }
};

//preorder traversal

void preorderTraversal(struct Node* node){
  if (node == NULL ) return;

  cout << node ->data <<" "; //Nampilan data pertama masuk.
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}

//postorder traversal

void postorderTraversal(struct Node *node){
  if (node == NULL) return;

  postorderTraversal (node ->left);
  postorderTraversal (node ->right);
  cout <<node->data<<" ";
}

//Inorder Traversal

void inorderTraversal (struct Node *node){
  if (node == NULL) return;
  
  inorderTraversal (node -> left);
  cout << node -> data <<" ";
  inorderTraversal (node -> right);
}

int main() {
  struct Node* root = new Node(1);
  root -> left = new Node (2);
  root -> right = new Node (14);
  root -> left -> left = new Node(20);
  root -> left -> right = new Node (13);
  cout <<"Inorder Traversal : ";
  inorderTraversal(root);
  cout <<endl<<"Preorder Traversal : ";
  preorderTraversal(root);
  cout <<endl<<"Postorder Traversal : ";
  postorderTraversal(root);
}