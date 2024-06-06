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

struct tree{

void inorder(node* root){
if(root !=nullptr){
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
}

void preorder(node* root){
if(root != nullptr){
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
}

void postorder(node* root){
    if(root != nullptr){
        postorder(root->left); // 80
        postorder(root->right); // 20  
        cout << root->data << " ";
    }
}
};

int main() {
tree t;
node* root;
root = new node(10);
node* temp = root;
node* _2nd = new node(20);
temp->left = _2nd;
node* _3rd = new node (30);
temp->right = _3rd;
node* _4th = new node(40);
_2nd->left = _4th;
node* _5th = new node(50);
_2nd->right = _5th;
node* _6th = new node(70);
_5th->left = _6th;
node* _7th = new node(80);
_5th->right = _7th;
node* _8th = new node(60);
_3rd->right = _8th;


//t.inorder(root);
//t.preorder(root);
t.postorder(root);

    return 0;
}
