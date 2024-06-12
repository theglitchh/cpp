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

void _search_(int item, node* root){
if(root == nullptr){
    return;
}
else{
    if(item < root->data){
        _search_(item,root->left);
     //   cout << root->data << endl;

    }else if(item > root->data){
_search_(item,root->right);
 //cout << root->data << endl;
    }else{
        cout << "Item " << root->data << " Found" << endl;
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
int item = 16;
t._search_(item,root);

    return 0;
}
