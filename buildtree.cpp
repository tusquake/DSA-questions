#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};
void display(Node* temp){
    cout<<temp->data;
}

void preorder(Node* t){
    if(t == NULL)
    return;
    cout<<t->data<<" -> ";
    preorder(t->left);
    preorder(t->right);
}

void inorder(Node* t){
    if(t == NULL)
    return;
    inorder(t->left);
    cout<<t->data<<" -> ";
    inorder(t->right);
}

void postorder(Node* t){
    if(t == NULL)
    return;
    postorder(t->left);
    postorder(t->right);
    cout<<t->data<<" -> ";
}

void level_order(Node* t){
    if(t == NULL)
    return;
    
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    preorder(root);
    cout<<"\n";
    inorder(root);
    cout<<"\n";
    postorder(root);
}