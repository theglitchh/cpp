#include <iostream>
using namespace std;


struct node{
int data;
node* left;
node* right;

node(int d){

data = d;
left = nullptr;
right = nullptr;
}

};

struct BST{

void _insert_(node* item, node* &root){

if(root == nullptr){
  root = item;
    return;
}
if(item->data < root->data){
    if(root->left == nullptr){
        root->left = item;
    }else{
 _insert_(item,root->left);
    }
   

}else if(item->data > root->data){
    if(root->right == nullptr){
        root->right = item;
    }else{
  _insert_(item,root->right);
    }
  
}

}



};

int main() {
BST t;
node* root;
root = new node(15);
node* first = new node(5);
node* second = new node(20);
node* third = new node(3);
node* fourth = new node(18);
node* fifth = new node(80);
node* sixth = new node(16);

root->left = first;
root->right = second;
first->left = third;
second->left = fourth;
second->right = fifth;
fourth->left = sixth;


//t.inorder(root);
//t.preorder(root);
node* newval = new node(17);
t._insert_(newval,root);

    return 0;
}
