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

void _floor_(node* item, node* &root){
    node* res = nullptr;
if(root == nullptr){
    return;
}else if(root == item){
cout << "found exact floor at root" << endl;
return;
}else{

    while(root != nullptr){
        if(item->data < root->data){
        root =root->left;
    }else{
        res =root;
        root = root->right;

    }
    }
    cout << res->data;
}
}

void _ceil_(node* item, node* &root){
    node* res = nullptr;
if(root == nullptr){
    return;
}else if(root->data == item->data){
cout << "found exact floor at root" << endl;
return;
}else{

while (root != nullptr){
if (root->data == item->data) {
                cout << "Found exact floor: " << root->data << endl;
                return;
            }else if(item->data > root->data){
        root = root->right;
    }else{
        res = root;
        root = root->left;
    }
}
if (res != nullptr) {
            cout << "Ceiling is " << res->data << endl;
        } else {
            cout << "No ceiling value found" << endl;
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
t._ceil_(newval,root);

    return 0;
}
